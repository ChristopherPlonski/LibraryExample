#include "Library.hpp"

Library::Library(string name, PhoneNumber *phone_number, Address *address)
{
	this->name = name;
	this->phone_number = phone_number;
	this->address = address;
	this->available_books = vector<Book>();
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

void Library::add_book(Book book)
{
	available_books.push_back(book);
}

void Library::print_available_books()
{
	for (Book book : this->available_books) {
		cout << book.pretty_print();
	}
}
