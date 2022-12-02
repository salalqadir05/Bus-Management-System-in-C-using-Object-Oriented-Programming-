#include "Bus.h"
#include <iostream>
using namespace std;
Bus::Bus()
{
	BusNo = 0;
	Bustype[0] = '\0';
	routefrom[0] = '\0';
	routeto[0] = '\0';
	totalseats = 32;
	totalBus = 5;

}
Bus::Bus(int a, char b[], char c[], char d[])
{
	BusNo = a;
	for (int i = 0; i < 20; i++)
	{
		Bustype[i] = b[i];
		routefrom[i] = c[i];
		routeto[i] = d[i];
	}
	totalseats = 32;
	totalBus = 5;

}
Bus::Bus(const Bus& bus)
{
	BusNo = bus.BusNo;
	for (int i = 0; i < 20; i++)
	{

		Bustype[i] = bus.Bustype[i];
		routefrom[i] = bus.routefrom[i];
		routeto[i] = bus.routeto[i];
	}

}

void Bus::display()

{
	cout << "------------------------------------------------------------\n";
	cout << "BUS NO is :" << BusNo << endl;
	cout << "Bus type is :" << Bustype << endl;
	cout << "Bus route from is :" << routefrom << endl;
	cout << "Bus route to :" << routeto << endl;
	cout << "Bus total seats is :" << totalseats << endl;
	cout << "Bus total buses is :" << totalBus << endl;
	cout << "------------------------------------------------------------\n";
}


void Bus::set1(int a, char b[], char c[], char d[])
{
	BusNo = a;
	for (int i = 0; i < 20; i++)
	{
		Bustype[i] = b[i];
		routefrom[i] = c[i];
		routeto[i] = d[i];
	}
	totalseats = 32;
	totalBus = 5;
}
int Bus::get1()
{
	return BusNo;
}
char Bus::get2()
{

	return *Bustype;
}
char Bus::get3()
{
	return *routefrom;
}
char Bus::get4()
{
	return *routeto;
}
void Bus::option()
{
	cout << "\t\twellcome to daewoo express\n";
	cout << "\n1.press for ticket reservation \n";
	cout << "\n2.press for Bus details \n";
	cout << "\n3.press passenger details\n";
	cout << "\n4.press for exit \n";
}

