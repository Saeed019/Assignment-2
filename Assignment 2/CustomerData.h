#pragma once
#include "Person.h"
#include "PhoneNumber.h"


class CustomerData: public Person
{
public:
	CustomerData();
	CustomerData(string, string, string, string, string, string, string, string, float, float, string, string,string,string);
	~CustomerData();
	void print1();
	void insert_phone(string, string);
	void delete_phone(string, string);
private:
	PhoneNumber numberList;
};

