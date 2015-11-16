// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A6
// PURPOSE : Complex class definition. This file presents Complex's public 
//           interface without revealing the implementations of Complex's member
//           functions, which are defined in Complex.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 11/11/2015   created program    Yev
// Complex class definition.

#include <iostream> // allows program to output data to the screen
using namespace std; // program uses names from the std namespace

class Complex
{
public:
	Complex(double = 0.0, double = 0.0); // constructor
	const bool operator==(const Complex &rhs) const; // equal comparison operator
private:
	friend ostream &operator<<(ostream&output, const Complex&complex); // extraction operator
	double real; // real part
	double imaginary; // imaginary part
}; // end class Complex
