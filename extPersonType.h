#ifndef EXTPERSONTYPE_H
#define EXTPERSONTYPE_H

#include <string>
#include "addressType.h"
#include "dateType.h"
#include "personType.h"



using namespace std;

class extPersonType : public personType {

   private: 
    addressType address; // Object variable to store the address
    dateType birthDate; // Object variable to store the birthdate
    string phoneNumber; // Member variable to store the phoneNumber
    string relationShip;// Memeber variable to store the relationship. 
    
  public:
    void setPhoneNumber(string);
    // Function to set phoneNumber.
    // Member variable phoneNumber is set according to the parameter.
    // Postcondition: phoneNumber = pNumber

    void setRelationship(string);
    // Function to set relationShip.
    // Member variable relationShip is set according to the parameter.
    // Postcondition: relationShip = relation

    string getPhoneNumber() const;
    // Function to return phoneNumber.
    // Postcondition: The value of the phoneNumber is returned.

    string getRelationship() const;
    // Function to return relationShip.
    // Postcondition: The value of relationShip is returned. 

    int getBirthMonth() const;
    // Function to return birthMonth.
    // Postcondition: The value of birthMonth is returned.

    void print() const;
    // Function to output the name, address, birthday, phonenumber and relationship of a person. 

    extPersonType (string = " ", string = " " , int = 1, int = 1, int = 1900, string = " ", string = " ", string = "XX", int = 10000, string = "None", string = "No relation");
    // Constructor to set the name, address, birthday, //phonenumber and relationship of a person.
    // The member variables address, birthDate, phoneNumber, //relationShip are set according to the parameters. 
    // Postcondition: phoneNumber = pNumber; relationShip = //relation;  
    // If no values are specified, the default values are used //to initialize the member variables. 

};

#endif
