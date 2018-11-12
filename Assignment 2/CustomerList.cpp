#include "CustomerList.h"

CustomerList::CustomerList()
{
}

CustomerList::CustomerList(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	float weight, string eyeColor, string hairColor, string mobile_number, string number_operator)
{
	insert_customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, height,
		weight, eyeColor, hairColor, mobile_number, number_operator);
}


CustomerList::~CustomerList()
{
}

void CustomerList::insert_customer(string name, string fatherName, string motherName, string maritalStatus,
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	float weight, string eyeColor, string hairColor, string mobile_number, string number_operator)
{

	CustomerData customer(name, fatherName, motherName, maritalStatus,
		nationalId, spouseName, presentAddress, permanentAddress, height,
		weight, eyeColor, hairColor, mobile_number, number_operator);
	if (customerList.search(nationalId))
	{
		cout << "Already Resistered." << endl;
	}
	else
	{
		customerList.InsertItem(customer);
	}
}

void CustomerList::print()
{
	customerList.print();
}
