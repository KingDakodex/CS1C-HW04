#ifndef HEADER_FILE
#define HEADER_FILE

// input output
#include <iostream>
// basic functions
#include <iomanip>
// string variable and string functions
#include <string>

// NOTE: The Below #include 's were causing a loop wherein the employee and date classes where being defined multiple times.
//		 Upon removal the code ran properly.

// includes the classes used for this program
//#include "EmployeeClass.cpp"
//#include "DateClass.cpp"
//#include "employee.h"
//#include "date.h"


using namespace std; 

// enums
enum GenderType
{
	Male,
	Female
};

#endif