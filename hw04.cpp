#include "hw04header.h"
#include "employee.h"
#include "date.h"
#include "programmer.h"
#include "architect.h"


/*
Author:     Dakota Gall
Class:      CS1c TTH 1:30
Assignment: HW04
*/

// variables
string nameOne = "Jimmy Fallon";
string JTComedian = "Comedian";

int main()
{

	// Testing alt Constructor and Mutators

	Employee One(nameOne, 12345, "949-555-1234", 40, Male, JTComedian, 100000, 31, 8, 2014);

	//One.Print();

	One.SetName("Stephan Colbert");
	One.setId(12346);
	One.setPhone("310-555-5555");
	One.setAge(51);
	// *note: I know Mr. Colbert is not female, only using it to show value change :)
	One.setGender(Female);
	One.setJob("The Late Show Host");
	One.setSalary(70123);
	One.setHireDate(8, 5, 2015);

	One.Print();
	
	// Testing Base Constructor and Mutators

	Employee Two;

	//Two.Print();

	Two.SetName("James Corden");
	Two.setId(87654);
	Two.setPhone("703-703-1234");
	Two.setAge(37);
	Two.setGender(Male);
	Two.setJob("Talk Show Host");
	Two.setSalary(900000);
	Two.setHireDate(25, 12, 2014);

	Two.Print();

	// Testing base constructor and mutators for Programmer

	//cout << "Testing Base Constructor and Mutators for Programmer, prints blank first as that is how it is initialized." << endl;

	Programmer Three;

	//Three.PrintPro();

	Three.SetName("Sam Software");
	Three.setId(54321);
	Three.setPhone("819-123-4567");
	Three.setAge(21);
	Three.setGender(Male);
	Three.setJob("Programmer");
	Three.setSalary(223000);
	Three.setHireDate(24, 12, 2011);
	Three.setDepNum(5432122);
	Three.setSupName("Joe Boss");
	Three.setRaise(4);
	Three.setKnowsCpp(true);
	Three.setKnowsJava(false);

	//Three.PrintPro();

	// Testing alt constructor 

	//cout << "Testing alt constructor for Programmer" << endl;

	Programmer Four("Mary Coder", 65432, "310-555-5555", 28, Female, "Programmer", 770123, 8, 2, 2010, 6543222, "Mary Leader", 7, true, true);

	//Four.PrintPro();

	// Testing base constructor and mutators for Architect

	//cout << "Testing Base Constructor and Mutators for Architect, prints blank first as that is how it is initialized." << endl;

	Architect Five;

	//Five.PrintArch();

	Five.SetName("Alex Arch");
	Five.setId(88888);
	Five.setPhone("819-123-4444");
	Five.setAge(31);
	Five.setGender(Male);
	Five.setJob("Architect");
	Five.setSalary(323000);
	Five.setHireDate(24, 12, 2009);
	Five.setDepNum(5434222);
	Five.setSupName("Big Boss");
	Five.setRaise(5);
	Five.setExperience(4);

	//Five.PrintArch();

	// Testing Alt constructor for Architect

	//cout << "Testing alt constructor for Architect" << endl;

	Architect Six("Sally Designer", 87878, "310-555-8888", 38, Female, "Architect", 870123, 8, 2, 2003, 6543422, "Big Boss", 8, 11);

	//Six.PrintArch();

	cout << endl << "Start of HW04 Changes";
	cout << endl << "Testing Overloaded Operator (==), using Employee One and Employee two" << endl;

	if (One == Two)
	{
		cout << "The Phone Numbers are equal" << endl;
	}
	else
	{
		cout << "The Phone Numbers are NOT equal" << endl;
	}

	cout << "Changeing Phone Numbers to be identical..." << endl;

	One.setPhone("703-703-1234");

	cout << "Testing Equality again" << endl;

	if (One == Two)
	{
		cout << "The Phone Numbers are equal" << endl;
	}
	else
	{
		cout << "The Phone Numbers are NOT equal" << endl;
	}

	cout << endl << "Testing Overloaded Operator (+), using Employee One" << endl;

	cout << "Adding 5 to age..." << endl;

	One + 5;

	One.Print();

	return 0;
}