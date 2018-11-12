#include "NumberInfo.h"
#include <string>

NumberInfo::NumberInfo()
{
}
NumberInfo::NumberInfo(string mobileNumber,string numberOperator)
{
	this->mobileNumber = mobileNumber;
	this->numberOperator = numberOperator;
}


NumberInfo::~NumberInfo()
{
}

void NumberInfo::set_number_operator(string numberOperator)
{
	this->numberOperator = numberOperator;
}

bool NumberInfo::is_equal(NumberInfo phoneNumber)
{
	if ((this->mobileNumber.compare(phoneNumber.get_mobile_number())) == 1 && (this->numberOperator.compare(phoneNumber.get_number_operator())) == 1)
		return true;
	else
		return false;
}

string NumberInfo::get_mobile_number()
{
	return mobileNumber;
}

string NumberInfo::get_number_operator()
{
	return numberOperator;
}

void NumberInfo::print()
{
	cout << "Mobile Number: " << mobileNumber <<"Operator: "<<numberOperator<< endl;
}

void NumberInfo::set_mobile_number(string mobileNumber)
{
	this->mobileNumber = mobileNumber;
}
