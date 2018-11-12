#pragma once
#include"UnsortedType.h"
#include "CustomerData.h"

class CustomerList
{
public:
	CustomerList();
	~CustomerList();
private:
	UnsortedType<CustomerData> list;
};

