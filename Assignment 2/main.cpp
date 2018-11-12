#include<iostream>
using namespace std;
#include "CustomerData.h"

int main()
{
	CustomerData a("Name", "FatherName", "MotherName", "Marital Status", "National Id", "Spouse Name", "Present Address", "Permanant Address",
		105.0, 24, "eyeColor", "Hair Color", "01797800497", "Grameen Phone");
	a.print();
	getchar();
	return 0;

}