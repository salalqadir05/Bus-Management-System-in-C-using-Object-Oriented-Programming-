#pragma once
#include "Passenger.h"
#include "Bus.h"

class Reservation
{
private:
	int hours;
	int mint;
	int second;
	char tickettype[20];
	Passenger p;
	Bus b;

public:
	Reservation();
	Reservation(int, int, int, char[]);
	void ddd(int count);
	~Reservation();
};

