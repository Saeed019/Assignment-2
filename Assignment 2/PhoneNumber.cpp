#include "PhoneNumber.h"

PhoneNumber::PhoneNumber()
{

}

PhoneNumber::PhoneNumber(string mobileNumber, string numberOperator)
{
	add_phone_number(mobileNumber, numberOperator);
}


PhoneNumber::~PhoneNumber()
{

}

void PhoneNumber::add_phone_number(string mobileNumber, string numberOperator)
{
	NumberInfo  number(mobileNumber, numberOperator);
	if (numberList.LengthIs() == 15)
	{
		cout << "Already have 15 numbers!" << endl;
	}
	else
	{
		numberList.InsertItem(number);
	}



}

void PhoneNumber::remove_phone_number(string mobileNumber, string numberOperator)
{

	NumberInfo  number(mobileNumber, numberOperator);
	if (numberList.LengthIs() == 1)
	{
		numberList.MakeEmpty();
	}
	else
	{
		numberList.DeleteItem(number);
	}
}

