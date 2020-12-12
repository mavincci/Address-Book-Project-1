// personType.h
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

using namespace std;

class personType
{
   private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name

  public:
    // Getters and setters
    void setFirstName(string);
    // Function to set the first name.
    // The member variable firstName is set according to the parameters.
    //Postcondition: firstName = first

    void setLastName(string);
    // Function to set the last name. 
    // The member variable lastName is set according to the parameters.
    // Postcondition: lastName = last

    string getFirstName() const;
    // Function to return the first name.
    // Postcondition: The value of the first name is returned.

    string getLastName() const;
    // Function to return the last name.
    // Postcondition: The value of the last name is returned. 

    void print() const;
       //Postcondition: outputs the first name and last name
       //in the form firstName lastName.

    personType(string first = "", string last = "");
      //Constructor
      //Sets firstName and lastName according to the parameters.
      //The default values of the parameters are null strings.
      //Postcondition: firstName = first; lastName = last


};

#endif