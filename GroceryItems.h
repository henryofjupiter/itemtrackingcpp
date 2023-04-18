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
    static void menuDisplay () ;
    static string converter (string item, int wordFreq);
    void fileRead(string item);
    static void fileWrite(string item, size_t wordFreq);
    static void mapping(map<string, int> &itemsInMap, string item, int wordFreq);
    static void printMap(map<string, int> &itemsInMap);
    static void printMap(map<string, int> &itemsInMap, size_t menu);

private:
    string itemInput;
    map<string, int> itemsInMap;

};


#endif //ITEMTRACKINGCPP_GROCERYITEMS_H
