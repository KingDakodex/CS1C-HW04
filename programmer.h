#ifndef HEADER_FILE_PROGRAMMER
#define HEADER_FILE_PROGRAMMER
#include "hw04header.h"
#include "employee.h"

class Programmer : public Employee
{

	friend bool CheckPN(Employee& tempEmp, Employee& tempPro);

public:
	// constructor
	Programmer();

	// alt constructor
	Programmer(string initName, int initId, string initPhone,
		int initAge, GenderType initGender,
		string initJob, int initSalary, int initDay,
		int initMonth, int initYear, int initDepNum, 
		string initSupName, int initRaise, bool initKnowsCpp, 
		bool initKnowsJava);

	// destructor
	~Programmer();

protected:
	// variables
	int depNum = 0;
	string supName;
	int raise = 0;
	bool knowsCpp;
	bool knowsJava;

public:
	// mutators
	void setDepNum(int tempDepNum);

	void setSupName(string tempSupName);

	void setRaise(int tempRaise);

	void setKnowsCpp(bool tempKnowsCpp);

	void setKnowsJava(bool tempKnowsJava);

public:
	// accessors
	int GetDepNum() const;

	string GetSupName() const;

	int GetRaise() const;

	bool GetKnowsCpp() const;

	bool GetKnowsJava() const;

public:
	// functions
	void PrintPro() const;

	//friend bool CheckPN(Employee& tempEmp, Programmer& tempPro);
};

#endif