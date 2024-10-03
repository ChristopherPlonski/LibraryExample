#include <string>
#include <vector>
#include "PhoneNumber.hpp";
#include "address.hpp";

using namespace std;

class Library {

public:
	Library(string name, PhoneNumber *phone_number, Address *address);
	string get_name();
	string get_phone_number();
	void print_full_address();
	// Add book later

private:
	string name;
	PhoneNumber *phone_number;
	Address *address;
	// Add book later

};