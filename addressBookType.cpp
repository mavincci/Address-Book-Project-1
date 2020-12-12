#include <iostream>
#include <fstream>
#include <string>
#include "addressBookType.h"


using namespace std;

void addressBookType::addEntry(extPersonType aPerson) {
    addressList[length]=aPerson;
    length++;
}

void addressBookType::findPerson(string last) {
    for (int i = 0 ; i < length ; i++) {
        if (addressList[i].getLastName() == last) {
            addressList[i].print();
            cout << endl;
            return;
        }
    }
    cout << "\n\a====================\n";
    cout << " Name not found\n";
    cout << "====================\n";
}

void addressBookType::findBirthdays(int month) {
    for (int i = 0 ; i < length ; i++) {
        if (addressList[i].getBirthMonth() == month) {
          addressList[i].print();
          cout << endl;
        }
    }
   
}
    
void addressBookType::findRelations(string relation) {
    for (int i = 0; i < length; i++) {
        if (addressList[i].getRelationship() == relation) {
            addressList[i].print();
            cout << endl;
        }
    }
      
}  
void addressBookType::print() {
  for (int i = 0; i < length; i++) {
    addressList[i].print();
  }
}

void addressBookType::sortEntries() {
    int current = 1;
    int index = length - 1;
    string temp;

    while (current < length) {
        index = current;
        bool placeFound = false;
        while (index > 0 && !placeFound)
            if (addressList[index].getLastName() < addressList[index - 1].getLastName()) {
                temp = addressList[index].getLastName();
                addressList[index].getLastName() = addressList[index - 1].getLastName();
                addressList[index - 1].getLastName() = temp;
                index = index - 1;
            }
            else {
                placeFound = true;
            }
        current++;
    }
}

void addressBookType::initEntries() {

    ifstream inFile;
    bool eof = false;
    string first, last, street, city, state, phoneNumber, relation;
    int month, day, year, zipcode;

    inFile.open("AddressBookData.txt");
       inFile >> first; 
    while (!inFile.eof()) {
       
        inFile >> last;
        inFile >> month >> day >> year;
        inFile.get();
        getline(inFile, street);
        getline(inFile, city);
        inFile >> state >> zipcode >> phoneNumber >> relation;

       
        extPersonType aPerson(first, last, month, day, year, street, city, state, zipcode, phoneNumber, relation);
        addEntry(aPerson);
        inFile >> first; 
    }

    inFile.close();
}

addressBookType::addressBookType(int len, int maxSize){
    length = len;
    maxLength = maxSize;
    
}

