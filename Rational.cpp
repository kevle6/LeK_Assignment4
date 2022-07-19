#include "Rational.h"
#include <iostream>
#include <string>
using namespace std;

void Rational::simplify() { // private method to simplify rational number
  int gcf = getGCD(m_numerator, m_denominator); // Finds greatest common factor (GCF) of numerator and denominator
  m_numerator /= gcf; // Divides numerator by GCF to simplify numerator
  m_denominator /= gcf; // Divides denominator by GCF to simplify denominator
}
int Rational::getGCD(int x, int y) { // private method to find greatest common factor of two numbers
  if (x == 0) { // if numerator is 0, return denominator
    return y;
  }
  else if ( (y == 0) || (x == y) ) { // if denominator is 0, or numerator and denominator are equal,
    return x; // return numerator
  }
  else if (x > y) { // if numerator is greater than denominator,
    return getGCD(x - y, y); // subtract denominator from numerator and use method again with new inputs
  }
  return getGCD(x, y - x); // else, subtract numerator from denominator and use method again with new inputs
}

Rational::Rational() { // default constructor
  m_numerator = 0; // numerator by default is 0
  m_denominator = 1; // denominator by default is 1
}
Rational::Rational(int numerator, int denominator) { // overloaded constructor
  m_numerator = numerator; // reassigns numerator with first parameter
  m_denominator = denominator; // reassigns denominator with second parameter
  simplify(); // calls simplify method to simply numerator and denominator
}
Rational::Rational(const Rational& r) { // copy constructor
  m_numerator = r.m_numerator; // copies numerator
  m_denominator = r.m_denominator; // copies denominator
}
Rational::~Rational() { // destructor
}

ostream& operator<<(ostream& os, const Rational& r) { // overloaded "<<" operator
  os << r.toString(); // converts Rational object to a string using toString method and inputs to output stream
  return os; // returns output stream
}
bool Rational::operator==(const Rational& r) { // overloaded "==" operator
  return (this->getValue() == r.getValue()); // returns boolean stating if values of two Rational objects are equal
}

double Rational::getValue() const { // returns rational number as a double value
  return (double)m_numerator / m_denominator; // numerator is converted to double and divided by denominator
}
string Rational::toString() const { // returns rational number as string in form a/b
  return to_string(m_numerator) + "/" + to_string(m_denominator); // outputs string of numerator value "/" denominator value
}
