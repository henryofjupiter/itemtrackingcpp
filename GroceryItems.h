//
// Created by Oshard Henry on 4/16/23.
//

#ifndef ITEMTRACKINGCPP_GROCERYITEMS_H
#define ITEMTRACKINGCPP_GROCERYITEMS_H
#include <string>
#include <iomanip>

using namespace std;

class GroceryItems {
public:
    void menuLoop() const;
    void menuDisplay () const;
    void SetItemInput(string item) {this->itemInput = itemInput;}
private:
    string itemInput;

};


#endif //ITEMTRACKINGCPP_GROCERYITEMS_H
