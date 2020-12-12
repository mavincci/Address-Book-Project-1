//personType.cpp
#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::setFirstName(string name)
{
    firstName = name;
}

void personType::setLastName(string name)
{
    lastName = name;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName()const
{
    return lastName;
}

void personType::print() const
{
    cout << firstName << " " << lastName;
}

personType::personType(string first, string last)

{
    firstName = first;
    lastName = last;
}


