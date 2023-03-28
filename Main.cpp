#include "Employee.h"
#include "Programmer.h"
#include "Lawyer.h"
#include "Accountant.h"

int main() {
	int size =8;
	Employee * empArr[size];
	Programmer p0 = Programmer("Ben Gamblin",false);
	empArr[0] = &p0;
	Programmer p1 = Programmer("Ima Nerd",true);
	empArr[1] = &p1;
	Lawyer p2 = Lawyer("Kenny Dewitt",10);
	empArr[2] = &p2;
	Lawyer p3 = Lawyer("Dan D. Lyon",0);
	empArr[3] = &p3;
	Lawyer p4 = Lawyer("Willie Makit",100);
	empArr[4] = &p4;
	Accountant p5 = Accountant("Hal E. Luya",17.00);
	empArr[5] = &p5;
	Accountant p6 = Accountant("Midas Well",45.50);
	empArr[6] = &p6;
	Accountant p7 = Accountant("Doll R. Bill",2.5);
	empArr[7] = &p7;
	
	for(int i = 0; i < size; i++)
	{
		
		cout<< empArr[i]->toStringStaticBind()<< endl;
		cout<<empArr[i]->toStringDynamicBind()<<endl;

	}

	return 0;
}
