#include "Passenger.h"
#include<iostream>
using namespace std;
Passenger::Passenger()
{
	name[0] = '\0';
	cnic[0] = '\0';

}

Passenger::Passenger(char a[], char b[])
{
	for (int i = 0; i < 25; i++)
	{
		name[i] = a[i];
		cnic[i] = b[i];
	}
}
void Passenger::settter1(char a[])
{
	for (int i = 0; i < 25; i++)
	{
		name[i] = a[i];
	}
}
void Passenger::setter2(char b[])
{
	for (int i = 0; i < 25; i++)
	{
		cnic[i] = b[i];
	}
}
char Passenger::getname()
{
	return *name;
}
char Passenger::getcnic()
{
	return *cnic;
}
void Passenger::ddisplay()
{
	cout << "------------------------------------------------------------\n";

	cout << "name of passenger is :" << name << endl;
	cout << "cnic of passenger :" << cnic << endl;
	int b = 2565;
	char a123[20] = "luxury";
	char a133[20] = "lahore";
	char a134[20] = "karachi";
	obj.set1(b, a123, a133, a134);
	obj.get1();
	obj.get2();
	obj.get3();
	obj.display();
	cout << "------------------------------------------------------------\n";
}
Passenger::~Passenger()
{
	name[0] = '\0';
	cnic[0] = '\0';

}


