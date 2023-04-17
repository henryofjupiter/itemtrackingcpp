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

    cout << "Enter number here: ";
    cin >> userInput;

    while(userInput != "4") {
        if (userInput == "1") {
            //enter menu option one
            cout << "Enter item for search: ";
            cin >> userInput;
            itemInput = userInput;
            fileRead(userInput);
        }
        else if (userInput == "2") {
            //enter menu option two
        }
        else if (userInput == "3") {
            //enter menu option three
        }
        else {
            cout << endl;
            cout << "Input Error, Try Again" << endl;
            menuDisplay();
        }
        cout << "Enter number here: ";
        cin >> userInput;
    }
}

// display menu option to user
void GroceryItems::menuDisplay() const {
    cout << "Menu Options" << endl;
    cout << "1. Item Look Up" << endl;
    cout << "2. Print List of Items Purchased" << endl;
    cout << "3. Print Item Frequency" << endl;
    cout << "4. exit program" << endl;
}

// use user input to search file and output with frequency
//of user input if word is found within file
void GroceryItems::fileRead(string input) {
    ifstream  inFS;
    int wordFreq = 0;
    string fileName;

    cout << "Opening file..." << endl;
    inFS.open("CS210_Project_Three_Input_File.txt");
    if (!inFS.is_open()) {
        cout << "could not open file" << endl;
    }
    while(!inFS.eof()) {
        inFS >> fileName;

        if (!inFS.fail()) {
            // display user input and frequency
            if(fileName == input) {
                ++wordFreq;
            }

        }
    }
    cout << input << " " << wordFreq << endl;
    mapping(input, wordFreq);
    inFS.close();
}

// converts frequency of user search word found into '*'
string GroceryItems::converter(string item, int wordFreq) {
        string newString;

        for (int i = 0; i < wordFreq; ++i) {
            newString += '*';
        }
        return newString;
}

void GroceryItems::mapping(string input, int wordFreq) {
    map<string, int> itemsInMap;

    itemsInMap.emplace(input, wordFreq);
}