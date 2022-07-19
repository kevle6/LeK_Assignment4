#ifndef RATIONAL_H
#define RATIONAL_H
#include <string>
#include <iostream>
using namespace std;

class Rational {

private:
  int m_numerator; // numerator member variable
  int m_denominator; // denominator member variable
  void simplify(); // private method to simplify rational number
  static int getGCD(int x, int y); // private method to find greatest common factor of two numbers

public:
  Rational(); // default constructor
  Rational(int numerator, int denominator); // overloadeded constructor
  Rational(const Rational& r); // copy constructor
  virtual ~Rational(); // destructor

  friend ostream& operator<<(ostream& os, const Rational& r); // overloaded "<<" operator to output a Rational object
  bool operator==(const Rational& r); // overloaded "==" operator to compare two Rational objects

  double getValue() const; // returns rational number as a double value
  string toString() const; // returns rational number as string in form a/b

};

#endif
