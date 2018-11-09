#include<iostream>
#include "Person.h"
using namespace std;
int main()
{
	Person obj;
	obj.set_name("Saeed");
	obj.set_father_name("Eshaque");
	obj.set_mother_name("Methila");
	obj.set_marital_status("Unmarried");
	obj.set_national_id("12345678");
	obj.set_spouse_name("Not applicable");
	obj.set_present_address("Dhaka");
	obj.set_permanent_address("Khulna");
	obj.set_height(5.5);
	obj.set_weight(55);
	obj.set_eye_color("Black");
	obj.set_hair_color("Black");
	obj.print();

	getchar();
	return 0;

}