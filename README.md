# itemtrackingcpp

## About The Project
_______
 - Build using C++

This projects reads a text file, using the input from user to perform keyword search of items in the list and return the item found along with its occurrences.

### Example:  
if userInput is `Peas`

```
//output

Peas 8     

//8 refers to the amount of time 'Peas' is found within file
```
__________

Items should be searched one at a time, another item can be looked up after the initial searched item is found.

### Example:  
```
Menu Options
1. Item Look Up
2. Print List of Items Purchased
3. Print Item Frequency
4. exit program
Enter menu # here: 1
Enter item for search: Peas         // Input from user
File opening...
Peas 8                             // item found
Enter menu # here:                 // enter menu option 1 for another search or 4 to exit
Enter item for search:             // enter second item for search
```

Each item searched and found during program execution will be stored and can be printed later using the menu options