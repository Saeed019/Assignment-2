#pragma once
#include"UnsortedType.h"
#include "CustomerData.h"

class CustomerList
{
public:
	CustomerList();
	CustomerList(string, string, string, string, string, string, string, string, float, float, string, string, string, string);
	~CustomerList();
	void insert_customer(string, string, string, string, string, string, string, string, float, float, string, string, string, string);
	void print();
private:
	UnsortedType<CustomerData> customerList;
};

