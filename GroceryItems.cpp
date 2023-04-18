//
// Created by Oshard Henry on 4/16/23.
//

#include "GroceryItems.h"
#include <string>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

// menu loop handles decision and
void GroceryItems::menuLoop() {
    string userInput;

    formatting();
    cout << "Enter menu # here: ";
    cin >> userInput;
    formatting();

    while(userInput != "4") {

        //search items in file
        if (userInput == "1") {
            //enter menu option one
            cout << "Enter item for search: ";
            cin >> userInput;
            itemInput = userInput;
            fileRead(userInput);
        }

        //prints items in map
        else if (userInput == "2") {
            printMap(itemsInMap);
        }

        //prints items in map (histogram)
        else if (userInput == "3") {
            printMap(itemsInMap, 3);

        }

        //for input not in menu
        else {
            cout << endl;
            cout << "Input Error, Try Again" << endl;
            menuDisplay();
        }
        formatting();
        cout << "Enter menu # here: ";
        cin >> userInput;
        formatting();
    }
}

// display menu option to user
void GroceryItems::menuDisplay() {
    formatting();
    cout << "MENU OPTIONS" << endl;
    formatting();
    cout << "1. Item Look Up" << endl;
    cout << "2. Print List of Items Purchased" << endl;
    cout << "3. Print Item Frequency" << endl;
    cout << "4. exit program" << endl;
}

// use user input to search file and output with frequency
// of user input if word is found within file
void GroceryItems::fileRead(string item) {
    ifstream  inFS;
    int wordFreq = 0;
    string fileName;

    cout << "File opening..." << endl;
    inFS.open("CS210_Project_Three_Input_File.txt");
    if (!inFS.is_open()) {
        cout << "could not open file" << endl;
    }

    while(!inFS.eof()) {
        inFS >> fileName;

        if (!inFS.fail()) {
            // display user input and frequency
            if(fileName == item) {
                ++wordFreq;
            }
            else if (inFS.eof() && wordFreq == 0){
                cout << "item not in file" << endl;
            }
        }
    }
    if (wordFreq > 0) {
        fileWrite(item, wordFreq);
        cout << "-->" << " " <<  item << " " << wordFreq << endl;
        mapping(itemsInMap, item, wordFreq);  // calls function that stores searched item
    }

    inFS.close();
}

// user input and frequency of word found is then stored within
// a data file
void GroceryItems::fileWrite(string item, size_t wordFreq) {
    ofstream outFS;
    outFS.open("frequency.dat");
    if(!outFS.is_open()) {
        cout << "Could not open frequency.dat" << endl;
    }
    outFS << item << " " << wordFreq;
    outFS.close();
}

// converts frequency of user search word found into '*'
string GroceryItems::converter(string item, int wordFreq) {
        string newString;

        for (int i = 0; i < wordFreq; ++i) {
            newString += '*';
        }
        return newString;
}

// adds searched item, and it's frequency to map for temp storage
void GroceryItems::mapping(map<string, int> &itemsInMap, string item, int wordFreq) {
    itemsInMap.emplace(item, wordFreq);
}

// prints searched item with the amount of time it appears in file
void GroceryItems::printMap(map<string, int> &itemsInMap) {

    map<string, int>::iterator itr;
    for(itr = itemsInMap.begin(); itr!= itemsInMap.end(); ++itr) {
        cout << itr->first << " " << itr->second << endl;
    }
}

// prints searched item with a histogram display of time it appears in file
void GroceryItems::printMap(map<string, int> &itemsInMap, size_t menu = 3) {
    map<string, int>::iterator itr;
    for(itr = itemsInMap.begin(); itr!= itemsInMap.end(); ++itr) {
        cout << itr->first << " " << converter(itr->first, itr->second) << endl;
    }
}
void GroceryItems::formatting() {
    cout << "-------------------" << endl;
}