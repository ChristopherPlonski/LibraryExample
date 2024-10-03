#include <iostream>
using namespace std;

class Book {
public:
	string pretty_print();
	Book(string title, string author, bool fiction);

private:
	string title;
	string author;
	bool fiction;
};