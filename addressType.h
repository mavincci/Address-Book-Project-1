#ifndef ADRESSTYPE_H_INCLUDED
#define ADRESSTYPE_H_INCLUDED

using namespace std;

class addressType{

  private:
    string dAddress; // variable to store the address
    string dCity; // variable to store the city 
    string dState; // variable to store the state
    int dZipcode; // variable to store the zipcode

  public:
    void setAddress(string address);
      // Function to set the address.
      // The member variable dAddress is set according to the parameter.
      // Postcondition: dAddress = address;

    void setCity(string city);
      // Function to set the city.
      // The member variable dCity is set according to the parameter.
      // Postcondition: dCity = city;

    void setState(string state);
      // Function to set the state.
      // The member variable dState is set according to the parameter.
      // Postcondition: dState = state;

    void setZipcode(int zipcode);
      // Function to set the zipcode.
      // The member variable dZipcode is set according to the parameter.
      // Postcondition: dZipcode = zipcode;

    string getAddress() const;
      // Function to return the address. 
      // Postcondition: The value of dAddress is returned. 

    string getCity() const;
      // Function to return the city. 
      // Postcondition: The value of dCity is returned. 

    string getState() const;
      // Function to return the state. 
      // Postcondition: The value of dState is returned. 

    int getZipcode() const;
      // Function to return the zipcode. 
      // Postcondition: The value of dZipcode is returned. 

    void print() const;
      // Function to output the address in the form address
      // city, state zipcode form 

    addressType(string = " ", string = " ", string = " XX", int = 10000);
      // constructor to set the address
      // The member variables dAddress, dState, dCity, and dzipcode are // set according to the parameters. 
      // Postcondition: dAddress = address ; dcity = city ; dState = 
      // state ; dZipcode = zipcode; 
      // If no values are specified, the default values are used to 
      // initialize the member variables.

};

#endif // ADRESSTYPE_H_INCLUDED
