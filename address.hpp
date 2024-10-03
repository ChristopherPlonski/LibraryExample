#include <iostream>
using namespace std;

class Address {
public:
	string pretty_print();
	Address(string street, string city, string state, string postal_code, string country);


private:
	string street;
	string city;
	string state;
	string postal_code;
	string country;


};