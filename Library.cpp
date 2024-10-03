#include "Library.hpp"

Library::Library(string name, PhoneNumber *phone_number, Address *address)
{
	this->name = name;
	this->phone_number = phone_number;
	this->address = address;
}

string Library::get_name()
{
	return name;
}

string Library::get_phone_number()
{
	return phone_number->pretty_print();
}

void Library::print_full_address()
{
	cout << address->pretty_print();
}
