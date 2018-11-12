#include "CustomerData.h"

CustomerData::CustomerData()
{
}
bool nid_checker1(string nationalId)
{
	return nationalId.length() == 11;
}
CustomerData::CustomerData(string name, string fatherName, string motherName, string maritalStatus, 
	string nationalId, string spouseName, string presentAddress, string permanentAddress, float height,
	         float weight, string eyeColor, string hairColor,string mobile_number,string number_operator)
{
	this->name = name;
	this->fatherName = fatherName;
	this->motherName = motherName;
	this->maritalStatus = maritalStatus;
	if (nid_checker1(nationalId))
		this->nationalId = nationalId;
	else
		cout << "Your national ID is not correct!!" << endl;
	this->spouseName = spouseName;
	this->presentAddress = presentAddress;
	this->permanentAddress = permanentAddress;
	this->height = height;
	this->weight = weight;
	this->eyeColor = eyeColor;
	this->hairColor = name;
	numberList.add_phone_number(mobile_number, number_operator);
}

CustomerData::~CustomerData()
{
}

void CustomerData::print()
{
	this->print_person();
	numberList.print();
}

void CustomerData::insert_phone(string mobileNumber, string numberOperator)
{
	numberList.add_phone_number(mobileNumber, numberOperator);
}

void CustomerData::delete_phone(string mobileNumber, string numberOperator)
{
	numberList.remove_phone_number(mobileNumber, numberOperator);
}

bool CustomerData::is_equal(CustomerData customer)
{

	return (customer.get_national_id().compare(nationalId) == 0);
}
