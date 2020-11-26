#include "Date.h"
#include <iostream>
using namespace std;

Date::Date()
{
	year = 0;
	month = 0;
	day = 0;
}

Date::~Date() {}

//Set functions
void Date::setYear(int y)
{
	year = y;
}

void Date::setMonth(int m)
{
	month = m;
}

void Date::setDay(int d)
{
	day = d;
}

//Get functions
int Date::getYear() const
{
	return year;
}

int Date::getMonth() const
{
	return month;
}

int Date::getDay() const
{
	return day;
}

//Leap Year and Valid Date functions

bool Date::isLeapYear()
{
	int leapYear = year;

	if ((leapYear % 4 == 0) && (leapYear % 100 != 0))
		return true;

	else if ((leapYear % 100 == 0) && (leapYear % 400 == 0))
		return true;

	else
		return false;
}

char Date::isValidDate() //returns 'i' for invalid or 'v' for valid
{
	if (year < 1753 || year > 9999)
		return 'i';

	else if (month < 1 || month > 12)
		return 'i';

	//validation for months with 31 days
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (day < 1 || day > 31)
			return 'i';
	}

	//validation for months with 30 days
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day < 1 || day > 30)
			return 'i';
	}

	else if (isLeapYear()) //validation for february on a leap year
	{
		if (day < 1 || day > 29)
			return 'i';
	}

	else if (!isLeapYear()) //validation for february on a regular year
	{
		if (day < 1 || day > 28)
			return 'i';
	}

	else
		return 'v';
}