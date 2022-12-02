#pragma once
#include "Bus.h"
class Passenger {
private:
	char cnic[25];
	char name[25];

	Bus obj;
public:
	Passenger();
	Passenger(char a[], char b[]);
	void settter1(char a[]);
	void setter2(char b[]);
	char getcnic();
	char getname();
	void ddisplay();
	~Passenger();
};

