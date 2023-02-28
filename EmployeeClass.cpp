#include "hw04header.h"
#include "employee.h"

//constructor
Employee::Employee(){}

// alt constructor
Employee::Employee(string initName, int initId, string initPhone,
				   int initAge, GenderType initGender,
				   string initJob, int initSalary, int initDay,
				   int initMonth, int initYear)
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

}

//destructor
Employee::~Employee(){}

//mutators
void Employee::SetName(string tempName)
{
	empName = tempName;
}
void Employee::setId(int tempId)
{
	id = tempId;
}
void Employee::setPhone(string tempPhone)
{
	phone = tempPhone;
}
void Employee::setAge(int tempAge)
{
	age = tempAge;
}
void Employee::setGender(GenderType tempGender)
{
	gender = tempGender;
}
void Employee::setJob(string tempJob)
{
	job = tempJob;
}
void Employee::setSalary(int tempSalary)
{
	salary = tempSalary;
}
void Employee::setHireDate(int tempDay, int tempMonth, int tempYear)
{
	hireDate.setDay(tempDay);
	hireDate.setDay(tempMonth);
	hireDate.setYear(tempYear);
}

// accessors
string Employee::GetName() const
{
	return empName;
}
int Employee::GetId() const
{
	return id;
}
string Employee::GetPhone() const
{
	return phone;
}
int Employee::GetAge() const
{
	return age;
}
GenderType Employee::GetGender() const
{
	return gender;
}
string Employee::GetJob() const
{
	return job;
}
int Employee::GetSalary() const
{
	return salary;
}
int Employee::GetHireDateDay() const
{
	return hireDate.useDay();
}
int Employee::GetHireDateMonth() const
{
	return hireDate.useMonth();
}
int Employee::GetHireDateYear() const
{
	return hireDate.useYear();
}


// functions
void Employee::Print() const
{
	// prints a header for relevant data, everything between endl's is on the same line
	cout << endl;
	cout << "----------------------------------------" << endl;
	cout << "Name: " << GetName() << endl
		 << "Employee's Id: " << GetId() << endl
		 << "Phone: " << GetPhone() << endl
		 << "Age: " << GetAge() << endl
		 << "Gender: ";

	// checks gender and outputs the correct statement
	if (GetGender() == Male)
	{
		cout << "Male";
	}
	else if (GetGender() == Female)
	{
		cout << "Female";
	}
	else
	{
		cout << "No Gender Defined";
	}

	cout << endl;
	cout << "Job Title: " << GetJob() << endl
		 << "Salary: " << GetSalary() << endl
		 << "Hire Date: " << GetHireDateMonth() << "/" << GetHireDateDay() << "/" << GetHireDateYear() << endl;
	cout << "----------------------------------------" << endl;

}

// friend function to check phone number equality 
bool CheckPN(Employee& tempEmp, Employee& tempPro)
{
	if (tempEmp.GetPhone() == tempPro.GetPhone())
	{
		return true;
	}
	else
	{
		return false;
	}
}