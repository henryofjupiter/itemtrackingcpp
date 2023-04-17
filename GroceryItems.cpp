//
// Created by Oshard Henry on 4/16/23.
//

#include "GroceryItems.h"
#include <string>
#include <iostream>

using namespace std;

// menu loop handles decision and
void GroceryItems::menuLoop() const {
    string userInput;

    cout << "Enter number here: ";
    cin >> userInput;

    while(userInput != "4") {
        if (userInput == "1") {
            //enter menu option one
            cout << "Enter item for search: ";
            cin >> userInput;
        }
        else if (userInput == "2") {
            //enter menu option two
        }
        else if (userInput == "3") {
            //enter menu option three
        }
        else {
            cout << "Input Error, Try Again" << endl;
            cout << endl;
            menuDisplay();
        }
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