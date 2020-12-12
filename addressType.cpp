#include <iostream>
#include "addressType.h"

void addressType :: setAddress(string address){
  dAddress = address;
}

void addressType :: setCity(string city){
  dCity = city;
}

void addressType :: setState(string state){
  if (state.length() == 2)
    dState = state;
  else
   dState = "XX";
}

void addressType :: setZipcode(int zipcode){
  if ( 11111 <= zipcode && zipcode <= 99999)
    dZipcode = zipcode;
  else
    dZipcode = 10000;
}

string addressType :: getAddress() const{
  return dAddress;
}

string addressType :: getCity() const{
  return dCity;
}

string addressType :: getState() const{
  return dState;
}

int addressType :: getZipcode() const{
  return dZipcode;
}

void addressType :: print() const{
    cout << dAddress << endl;
    cout << dCity << " , " << dState << " " << dZipcode << endl;
}

addressType :: addressType(string address, string city , string state , int zipcode){
  
  dAddress = address;
  dCity = city;
  dState = state;
  dZipcode = zipcode;
}
