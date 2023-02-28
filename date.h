#ifndef HEADER_FILE_DATE
#define HEADER_FILE_DATE
#include "hw04header.h"

class Date
{

public:
	//constructor
	Date();

	// alt constructor
	Date(int d, int m, int y);

	//destructor
	~Date();

private:
	// variables
	int day = 0;
	int month = 0;
	int year = 0;

public:
	// mutators
	void setDay(int numDay);

	void setMonth(int numMonth);

	void setYear(int numYear);

	// accessors
	int useDay() const;

	int useMonth() const;

	int useYear() const;

};


#endif