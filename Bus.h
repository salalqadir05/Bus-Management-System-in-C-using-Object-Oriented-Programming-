#pragma once
#include<string>
#include <string.h>
class Bus
{
private:
	int BusNo;
	char  Bustype[20];
	char routefrom[20];
	char routeto[20];
	int totalBus;
	int totalseats;
public:
	Bus();
	Bus(int, char[], char[], char[]);
	Bus(const Bus& obj);
	void set1(int, char[], char[], char[]);
	//void set2(string);
	//void set3(string);
	//void set4(string);
	int get1();
	char get2();
	char get3();
	char get4();
	void display();
	void option();
	//~Bus();
};



