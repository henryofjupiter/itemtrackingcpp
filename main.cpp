#include <iostream>
#include <string>
#include <map>
#include "GroceryItems.h"



using namespace std;

int main() {
    map<string, int> itemsInMap;  // data structure declaration

    GroceryItems item; // object declaration

    item.menuDisplay();
    item.menuLoop();
    return 0;
}