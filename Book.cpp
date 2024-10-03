#include "Book.hpp"
#include <iostream>

using namespace std;

Book::Book(string title, string author,bool fiction){
  this-> title = title;
  this-> author = author;
  this-> fiction = fiction;
}

Book :: pretty_print(){
  return title + ", " + author + ", " + fiction;
}

