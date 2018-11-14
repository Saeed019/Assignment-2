#include<iostream>
using namespace std;
#include "CustomerList.h"

int main()
{
	CustomerList a("Name", "FatherName", "MotherName", "Marital Status", "11111111111", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "01752411511", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "22222222222", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411512", "Grameen Phone");
	a.insert_mobile_number("11111111111", "01952411521", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "33333333333", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411513", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "44444444444", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411514", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "55555555555", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411515", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "66666666666", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411516", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "77777777777", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411517", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "88888888888", "Spouse Name", "Present Address", "Permanant Address",
		106.0, 24, "eyeColor", "Hair Color", "01752411518", "Grameen Phone");
	a.remove_mobile_number("01752411518");
	a.change_operator("01952411521", "BanglaLink");
	a.remove_mobile_number("01752411511");
    a.print();
	getchar();
	return 0;

}