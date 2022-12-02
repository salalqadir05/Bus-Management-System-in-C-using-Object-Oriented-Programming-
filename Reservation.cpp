#include "Reservation.h"
#include <iostream>
using namespace std;
Reservation::Reservation()
{
	hours = 0;
	mint = 0;
	second = 0;
	tickettype[0] = '\0';
}
Reservation::Reservation(int a, int b, int c, char  d[])
{
	hours = a;
	mint = b;
	second = c;
	for (int i = 0; i < 20; i++)
	{
		tickettype[i] = d[i];
	}
}
void Reservation::ddd(int count)
{

	int bbusNo;
	cout << "enter the bus No :";
	cin >> bbusNo;
	char aa1[20], aa2[20], aa3[20];
	cout << "enter the route from :";
	cin >> aa1;
	cout << "enter the route to :";
	cin >> aa2;
	char na[20];
	cout << "enter the name of Passenger :";
	cin >> na;
	char cn[25];
	cout << "enter the cnic of Passenger :";
	cin >> cn;
	cout << "------------------------------------------------------------\n";
	b.set1(bbusNo, aa1, aa2, tickettype);
	b.get1();
	b.get2();
	b.get3();
	b.get4();
	b.display();
	p.settter1(na);
	p.setter2(cn);
	p.getname();
	p.getcnic();
	p.ddisplay();

	cout << "time of reservation is :" << hours << ":" << mint << ":" << second << endl;
	cout << "tickettype is:" << tickettype << endl;
	cout << "your seat number allcated is :" << count << endl;

	cout << "------------------------------------------------------------\n";
}
Reservation::~Reservation()
{
	hours = 0;
	mint = 0;
	second = 0;
	tickettype[0] = '\0';
}
