#pragma once
#include "Person.h"
#include "PhoneNumber.h"
using namespace std;

class CustomerData: public Person
{
public:
	CustomerData();
	CustomerData(string, string, string, string, string, string, string, string, float, float, string, string,string,string);
	~CustomerData();
	void print();
	void insert_phone(string, string);
	void delete_phone(string, string);
	bool is_equal(CustomerData);
private:
	PhoneNumber numberList;
};

