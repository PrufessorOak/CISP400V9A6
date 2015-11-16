// NAME  : Yevgeniy Lankin
// CLASS : CISP 400, Online
// Assignment #: A6
// PURPOSE : Date class definition. This file presents Dates's public 
//           interface without revealing the implementations of Date's member
//           functions, which are defined in Date.cpp
//           To show my understanding of a header file and function prototypes.
// Software Change (Modifications) Record
// date         what               who
// 11/11/2015   created program    Yev
// Date class definition.

#include <iostream> // allows program to output data to the screen
#include <string> 
using namespace std; // program uses names from the std namespace

class Date
{
public:
	static string monthName[13];
	static const int monthsPerYear = 12; // months in a year
	explicit Date(int = 1, int = 1, int = 1); // constructor
	friend ostream &operator<<(ostream &, const Date &); // <<overload print, prints out imaginary number using only object name
	const bool Date::operator==(const Date &rhs) const; // ==overloadcompares objects, returns true/false
private:
	int month, day, year;
	int Date::checkDay(int testDay) const; // utility function to check if day is proper for month and year
}; // end class Date
