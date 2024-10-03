#include <vector>

#include "PhoneNumber.hpp"
#include "Address.hpp"
#include "Book.hpp"

using namespace std;

class Library {

public:
	Library(string name, PhoneNumber *phone_number, Address *address);
	string get_name();
	string get_phone_number();
	void print_full_address();
	void add_book(Book book);
	void print_available_books();

private:
	string name;
	PhoneNumber *phone_number;
	Address *address;
	vector<Book> available_books;
};