#include <iostream>
#include "extPersonType.h"
#include <string>

using namespace std;

void extPersonType :: setPhoneNumber(string pNumber){
  phoneNumber = pNumber;

}
void extPersonType :: setRelationship(string relation){
  relationShip = relation;
}
string extPersonType :: getPhoneNumber() const{
  return phoneNumber;
}
string extPersonType :: getRelationship() const{
  return relationShip;
}

int extPersonType::getBirthMonth() const {
	return birthDate.getMonth();
}
void extPersonType :: print() const{
  
  cout << endl;
  personType::print(); 
  cout << endl;
  address.print();
  cout << phoneNumber << endl;
  cout << "Birthday: ";
  birthDate.print();
  cout << endl;
  cout << "RelationShip: " << relationShip << endl;

}

extPersonType :: extPersonType (string first, string last , int month, int day, int year, string address, string city, string state, int zipcode, string pNumber, string relation) : personType (first, last) , birthDate(month, day, year), address(address, city, state, zipcode) {

  phoneNumber = pNumber;
  relationShip = relation;
  
}
   
  
