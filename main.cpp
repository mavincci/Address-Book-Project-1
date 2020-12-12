#include <iostream>
#include <string>
#include <iomanip>
#include "addressBookType.h"

using namespace std;

enum menu_choice {
  DEFAULT,        // 0
  LIST_ADDR,      // 1
  FND_BY_LST_NM,  // 2
  BDAYS_OF_MNTH,  // 3
  FND_BY_RELATION,// 4
  QUIT            // 5
};

void showMainMenu();

int main() {
    string Name;
    int month;
    string relation;
    addressBookType book;
    book.initEntries();
    book.sortEntries();
    int choice; 
  
    do {
        showMainMenu();
        
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case LIST_ADDR:
                book.print();  
                break;
            case FND_BY_LST_NM: 
                cout << "Enter a last name: ";
                cin >> Name;
                book.findPerson(Name);
                break;
            case BDAYS_OF_MNTH:
                cout << "Enter a birth month: ";
                cin >> month;
                book.findBirthdays(month);
                break;
            case FND_BY_RELATION:
                cout << "Enter a relationship: ";
                cin >> relation;
                book.findRelations(relation);
                break;
           case QUIT:
                cout << "===================" << endl ;
                cout << "*** THANK YOU ***" << endl;
                cout << "===================" << endl << endl;

                break;

            default: 
                cout << "Invalid input" << endl;
        }
    }

    while (choice != 5);

    return 0;
}

void showMainMenu() {
    cout << "\n===========================\n";
    cout << "   Online Address Book" << endl;
    cout << "===========================" << endl;
    cout << "******Main Menu*******" << endl;
    cout << "   Select an option " << endl;
    cout << "1: List of addresses" << endl;
    cout << "2: Find by last name" << endl;
    cout << "3: Birthdays of the Month" << endl;
    cout << "4: Find by relatinship" << endl;
    cout << "5: Quit" << endl;
    cout << "===========================\n" << endl;
    
}

