#include <iostream>
#include <address.hpp>
using namespade std;

address:: address(string street, string city, string state, string postal_code, string country){
  this-> street = street;
  this-> city = city;
  this-> state = state;
  this->postal_code = postal_code;
  this-> country = country;
}
address::pretty_print(){
  return street + ", " + city + ", " + state + ", " + postal_code ", " + country;
}