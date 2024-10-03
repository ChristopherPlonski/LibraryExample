#include <iostream>
using namespade std;

class Book{
  public:
  string pretty_print();
  Book(string title, string author,boolean fiction); 

  private: 
  string title;
  string author;
  boolean fiction;
}