#include "hw04header.h"
#include "architect.h"

//constructor
Architect::Architect(){}

Architect::Architect(string initName, int initId, string initPhone,
	int initAge, GenderType initGender,
	string initJob, int initSalary, int initDay,
	int initMonth, int initYear, int initDepNum,
	string initSupName, int initRaise, int initExperience)
{
	empName = initName;
	id = initId;
	phone = initPhone;
	age = initAge;
	gender = initGender;
	job = initJob;
	salary = initSalary;
	hireDate.setDay(initDay);
	hireDate.setMonth(initMonth);
	hireDate.setYear(initYear);

	depNum = initDepNum;
	supName = initSupName;
	raise = initRaise;
	experience = initExperience;
}

// destructor
Architect::~Architect() {}

// mutators
void Architect::setDepNum(int tempDepNum)
{
	depNum = tempDepNum;
}

void Architect::setSupName(string tempSupName)
{
	supName = tempSupName;
}

void Architect::setRaise(int tempRaise)
{
	raise = tempRaise;
}

void Architect::setExperience(int tempExperience)
{
	experience = tempExperience;
}

// accessors
int Architect::GetDepNum() const
{
	return depNum;
}

string Architect::GetSupName() const
{
	return supName;
}

int Architect::GetRaise() const
{
	return raise;
}

int Architect::GetExperience() const
{
	return experience;
}

// functions

void Architect::PrintArch() const
{
	// prints the data types stored by Employee
	Print();
	// prints the specific types stored by Programmer
	cout << "----------------------------------------" << endl;
	cout << "Name: " << GetName() << endl
		<< "Department: " << GetDepNum() << endl
		<< "Supervisor's Name: " << GetSupName() << endl
		<< "Raise %: " << GetRaise() << endl
		<< "Years of Experience: " << GetExperience() << endl;
	cout << "----------------------------------------" << endl;
}