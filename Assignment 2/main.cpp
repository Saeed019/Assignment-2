#include<iostream>
using namespace std;
#include "CustomerList.h"

int main()
{
	CustomerList a("Name", "FatherName", "MotherName", "Marital Status", "National Id", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "01797800497", "Grameen Phone");
	a.print();
	getchar();
	return 0;

}