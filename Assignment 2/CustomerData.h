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
	bool check_nid(string);
	bool check_mobile(string);
	void print();
	bool insert_phone(string,string, string);
	bool delete_phone(string, string);
	bool is_equal(string);
private:
	PhoneNumber numberList;
};

