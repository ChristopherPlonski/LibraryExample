#include "PhoneNumber.hpp"

PhoneNumber::PhoneNumber(int country_world_code, string area_code, string phone_number)
{
	this->country_world_code = country_world_code;
	this->area_code = area_code;
	this->phone_number = phone_number;
}

string PhoneNumber::pretty_print()
{
	string prettyPrintPhoneNumber = "+"+  to_string(country_world_code) + " (" + area_code + ") "+phone_number;

	return prettyPrintPhoneNumber;
}
