/* Full Name: Kevin T Le

Student ID: 2406054

Chapman Email: kevle@chapman.edu

Course Number and Section: CPSC 298-06

Programming Assignment 4

Purpose: This program utilizes the Rational class. A rational number can be
represented as the ratio of two integer values, a and b, where b is not zero. The class has
attributes for the numerator and denominator of this ratio. The ratio is stored in
its simplest form. The Rational instance can be outputted or compared using << and ==
with its variable name. No conversion is required within the main file. */

#include "Rational.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  Rational r (40,36); // Creates new instance of Rational called "r", with numerator = 40 and denominator = 36
  cout << r << endl; // Outputs the Rational instance "r" as a string. It will be in simplified fraction form
  Rational w(r); // A new instance "w" is created. It is a deep copy of the "r" instance
  Rational q(13,3); // Creates new instance of Rational called "q", with numerator = 13 and denominator = 3
  Rational b; // Creates default Rational instance "b"

  cout << w << endl; // Outputs the Rational instance "w"
  cout << q << endl; // Outputs the Rational instance "q"
  cout << b << endl; // Outputs default Rational instance "b"

  cout << (r == q) << endl; // compares the "r" and "q" instances. Should output 0 (false)
  cout << (r == w) << endl; // compares the "r" and "w" instances. Should output 1 (true)

  cout << w.getValue() << endl; // outputs value of "w" as a double
  cout << q.getValue() << endl; // outputs value of "q" as a double

  return 0;
}
