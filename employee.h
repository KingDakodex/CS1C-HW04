#ifndef HEADER_FILE_EMPLOYEE
#define HEADER_FILE_EMPLOYEE
#include "hw04header.h"
#include "date.h"

class Employee
{

public:
	// constructor
	Employee();

	// alt constructor
	Employee(string initName, int initId, string initPhone,
		int initAge, GenderType initGender,
		string initJob, int initSalary, int initDay,
		int initMonth, int initYear);

	// deconstructor
	~Employee();

protected:
	//variables
	string empName;
	int id = 0;
	string phone;
	int age = 0;
	GenderType gender;
	string job;
	int salary = 0;
	Date hireDate;

public:
	//mutators
	void SetName(string tempName);

	void setId(int tempId);

	void setPhone(string tempPhone);

	void setAge(int tempAge);

	void setGender(GenderType tempGender);

	void setJob(string tempJob);

	void setSalary(int tempSalary);

	void setHireDate(int tempDay, int tempMonth, int tempYear);

public:
	// accessors
	string GetName() const;

	int GetId() const;

	string GetPhone() const;

	int GetAge() const;

	GenderType GetGender() const;

	string GetJob() const;

	int GetSalary() const;

	int GetHireDateDay() const;

	int GetHireDateMonth() const;

	int GetHireDateYear() const;

public:
	// functions
	void Print() const;

	//note* this ONLY compares the phone numbers
	//note 2* am unsure how to move definition into cpp file without breaking
	bool operator ==(Employee& temp)
	{
		if (GetPhone() == temp.GetPhone())
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// note* ONLY adds to age
	void operator +(int toAdd)
	{
		setAge(age + toAdd);
	}

	//
	bool CheckPN(Employee& tempEmp, Employee& tempPro);
};


#endif