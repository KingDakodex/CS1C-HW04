#include "hw04header.h"
#include "date.h"

//constructor
Date::Date(){}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
//destructor
Date::~Date(){}

// mutators
void Date::setDay(int numDay)
{
	day = numDay;
}
void Date::setMonth(int numMonth)
{
	month = numMonth;
}
void Date::setYear(int numYear)
{
	year = numYear;
}

// accessors
int Date::useDay() const
{
	return day;
}
int Date::useMonth() const
{
	return month;
}
int Date::useYear() const
{
	return year;
}

