// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A6
// PURPOSE : To show my understanding of member functions prototyped in Complex.h
//           and class member-function definitions.
//           Complex class member-function definitions.
// Software Change (Modifications) Record
// date         what               who
// 11/11/2015   created program    Yev

#include "Complex.h" // Complex class definition

Complex::Complex(double realPart, double imaginaryPart)
	: real(realPart),
	imaginary(imaginaryPart)
{
	this->real = realPart;
	this->imaginary = imaginaryPart;
} // end Complex constructor

//overload extraction operator
ostream &operator<<(ostream&output, const Complex &complex)
{
	if (complex.imaginary > 0) // postive imaginary
		output << complex.real << " + " << complex.imaginary;
	else if (complex.imaginary == 0) // zero imaginary
		output << complex.real;
	else if (complex.imaginary < 0) // negative imaginary
		output << complex.real << " - " << -complex.imaginary;
	return output;
} //end function operator <<

// equal comparison operator
const bool Complex::operator==(const Complex &rhs) const
{
	if ((real == rhs.real) && (imaginary == rhs.imaginary))
		return true;
	else
		return false;
} // end equal comparison operator
