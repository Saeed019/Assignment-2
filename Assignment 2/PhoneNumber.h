#pragma once
#include<string>
#include<iostream>
#include"UnsortedType.h"
#include "NumberInfo.h"
using namespace std;

class PhoneNumber
{
public:
	PhoneNumber();
	PhoneNumber(string, string);
	~PhoneNumber();
	void add_phone_number(string, string);
	void remove_phone_number(string, string);
	void print();
private:
	UnsortedType<NumberInfo> numberList;
};

