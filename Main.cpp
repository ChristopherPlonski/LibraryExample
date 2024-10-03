#include "Book.hpp"
#include "Library.hpp"
#include "PhoneNumber.hpp"
#include "address.hpp"

int main() {
	Book *book = new Book("Title", "Author", true);
	PhoneNumber* phoneNumber = new PhoneNumber(1, "847", "555-555");
	Address* address = new Address("222", "Harper", "Illinois", "60169", "United States");
	Library * library = new Library("Library Goku", phoneNumber, address);

	library->add_book(*book);

	library->print_available_books(
}