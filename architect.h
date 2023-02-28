#ifndef HEADER_FILE_ARCHITECT
#define HEADER_FILE_ARCHITECT
#include "hw04header.h"
#include "employee.h"

class Architect : public Employee
{
public:
	// constructor
	Architect();

	// alt constructor
	Architect(string initName, int initId, string initPhone,
		int initAge, GenderType initGender,
		string initJob, int initSalary, int initDay,
		int initMonth, int initYear, int initDepNum,
		string initSupName, int initRaise, int initExperience);

	// destructor
	~Architect();

protected:
	// variables
	int depNum = 0;
	string supName;
	int raise = 0;
	int experience = 0;

public:
	// mutators
	void setDepNum(int tempDepNum);

	void setSupName(string tempSupName);

	void setRaise(int tempRaise);

	void setExperience(int tempExperience);

public:
	// accessors
	int GetDepNum() const;

	string GetSupName() const;

	int GetRaise() const;

	int GetExperience() const;

public:
	// functions
	void PrintArch() const;

};

#endif