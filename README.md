# itemtrackingcpp

## About The Project
_______

This is an item tracking program that is made using C++ in which a user can search for items within a compiled list of purchased items stored on a separate text file. Searching for an item within the text file will then enable the user to temporarily store their recent searches and print them out during a single execution of the program and then permanently store them in a separate data file.

Within the project I believe I handled the program flow well; however, I think enhancing my object-oriented design would enhancing my code’s ability to be portable, understandable, and more efficient.

One of the challenges I faced writing this program was implementing the map data structure to temporarily store and retrieve searches made by the user. This was because I wasn’t familiar with its implementation and implementing a retrieval function to print the data stored within the data structure also forced me to learn other concepts within C++ (like iterations).

Designing this program have really enable me to reinforce good coding practice, which in turn enable to produce code that is readable and easy to understand. I was also able to put into practice my knowledge of functions and classes into creating this program—all of which are skills that are transferable to other projects and course work. In addition, to thinking critically and preserving.

I made this program maintainable by breaking up the program into separate files. Doing this enable me to easily focus on the program in separate parts than as an entire whole, so if there is a function with a logic error I know exactly where to go to fix the issue. Readable, by adhering to good code practices like naming conventions and in-line comments to add brief explanation of code. Adaptable, by utilizing object-oriented concepts such as inheritance, abstraction, and polymorphism.

This projects reads a text file, using the input from user to perform keyword search of items in the list and return the item found along with its occurrences.

<br>

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