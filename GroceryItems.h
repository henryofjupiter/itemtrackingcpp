//
// Created by Oshard Henry on 4/16/23.
//

#ifndef ITEMTRACKINGCPP_GROCERYITEMS_H
#define ITEMTRACKINGCPP_GROCERYITEMS_H
#include <string>
#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

class GroceryItems {
public:
    void menuLoop();
    void menuDisplay () const;
    void SetItemInput(string item) {this->itemInput = itemInput;}
    string converter (string item, int wordFreq);
    void fileRead(string item);
    void fileWrite(string item, size_t wordFreq);
    static void mapping(map<string, int> &itemsInMap, string item, int wordFreq);
    void printMap(map<string, int> &itemsInMap);
    void printMap(map<string, int> &itemsInMap, size_t menu);

private:
    string itemInput;
    map<string, int> itemsInMap;

};


#endif //ITEMTRACKINGCPP_GROCERYITEMS_H
