#include "hw04header.h"
#include "programmer.h"

//constructor
Programmer::Programmer(){}

Programmer::Programmer(string initName, int initId, string initPhone,
					   int initAge, GenderType initGender,
					   string initJob, int initSalary, int initDay,
					   int initMonth, int initYear, int initDepNum,
					   string initSupName, int initRaise, bool initKnowsCpp,
					   bool initKnowsJava)
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
	knowsCpp = initKnowsCpp;
	knowsJava = initKnowsJava;
}

// destructor
Programmer::~Programmer(){}

// mutators
void Programmer::setDepNum(int tempDepNum)
{
	depNum = tempDepNum;
}

void Programmer::setSupName(string tempSupName)
{
	supName = tempSupName;
}

void Programmer::setRaise(int tempRaise)
{
	raise = tempRaise;
}

void Programmer::setKnowsCpp(bool tempKnowsCpp)
{
	knowsCpp = tempKnowsCpp;
}

void Programmer::setKnowsJava(bool tempKnowsJava)
{
	knowsJava = tempKnowsJava;
}


// accessors
int Programmer::GetDepNum() const
{
	return depNum;
}

string Programmer::GetSupName() const
{
	return supName;
}

int Programmer::GetRaise() const
{
	return raise;
}

bool Programmer::GetKnowsCpp() const
{
	return knowsCpp;
}

bool Programmer::GetKnowsJava() const
{
	return knowsJava;
}

// functions
void Programmer::PrintPro() const
{
	// prints the data types stored by Employee
	Print();
	// prints the specific types stored by Programmer
	cout << "----------------------------------------" << endl;
	cout << "Name: " << GetName() << endl
		<< "Department: " << GetDepNum() << endl
		<< "Supervisor's Name: " << GetSupName() << endl
		<< "Raise %: " << GetRaise() << endl
		<< "C++ Knowledge: ";

	// checks for if the programmer knows C++
	if (GetKnowsCpp())
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	cout << endl;

	cout << "Java Knowledge: ";

	// checks for if the programmer knows Java
	if (GetKnowsJava())
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	cout << endl;

	cout << "----------------------------------------" << endl;
}