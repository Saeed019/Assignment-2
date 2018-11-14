#include<iostream>
using namespace std;
#include "CustomerList.h"

int main()
{
	CustomerList a("Name", "FatherName", "MotherName", "Marital Status", "National Id", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "01797800497", "Grameen Phone");
	a.insert_customer("Name", "FatherName", "MotherName", "Marital Status", "national Id", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "11797800497", "Grameen Phone");
	a.insert_mobile_number("National Id", "21797800497", "Grameen Phone");
	a.delete_customer("National Id");
	a.remove_mobile_number("11797800497");
a.print();
	getchar();
	return 0;

}