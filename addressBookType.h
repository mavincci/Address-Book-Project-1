#ifndef ADDRESSBOOKTYPE_H
#define ADDRESSBOOKTYPE_H

#include <string>
#include "extPersonType.h"

using namespace std; 

class addressBookType{

   private:
    extPersonType addressList[500]; // object variable to store entries
    int length;    // member variable to store the current length of the 
                   // address list.
    int maxLength; // member variable to store the maximum length of the address list.
  
  public:

    void addEntry(extPersonType);
    // Function to add entries
    // Postcondition: It stores the extPersonType object in the array and increments the length variable.
    void findPerson(string);
    // function to find person by last name.
    // Postcondition: Prints the entry for that person if found in the addressList array.
    void findBirthdays(int);
    // Function to find birthdays.
    // Postcondition: Prints the entries of all the persons in the addressList array who have birthdays in that month. 
    void findRelations(string);
    // Function to find relationships
    // Postcondition: Prints the entries that are tagged with that relationship. 
    void print();
    // Function to print all the entries in the addressList array. 
    void sortEntries();
    //Function to sort entries alphabetically by last name. 
    void initEntries();
    //Function to read the data for the address book from a file. 
    addressBookType (int len = 0, int maxSize = 500);
    // Constructor to set the length and maximum size of the address list array.
    // Postcondition: length = len; maxLength = maxSize;
    // If no values are specified, the default values are used to initialize the member variables. 

};

#endif