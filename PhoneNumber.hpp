#include <string>

using namespace std;

class PhoneNumber {

public:
	PhoneNumber(int country_world_code, string area_code, string phone_number);
	string pretty_print();

private:
	int country_world_code;
	string area_code;
	string phone_number;

};