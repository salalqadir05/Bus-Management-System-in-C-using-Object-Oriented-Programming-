#include <iostream>
#include <fstream>
#include "Bus.h"
#include "Passenger.h"
#include "Reservation.h"
using namespace std;
void readfile(fstream& fin);
int main()
{
	fstream fin;
	fin.open("data.txt");
	int count = 1;
	while (true)
	{
		char bustype;
		char routeto;
		char routefrom;
		Bus obj;
		obj.option();
		int op;
		cout << "enter your choice :";
		cin >> op;

		if (op == 2)
		{
			cout << "\n\t\tthere are five buses avalible in today's schedule\n";
			cout << "------------------------------------------------------------\n";
			readfile(fin);
			cout << "------------------------------------------------------------\n";
			int x;
			cout << "enter your choice of travelling\n";
			cin >> x;
			char arr1[20];
			cout << "enter the bus type :";
			cin >> arr1;
			char arr2[20];
			cout << "enter the route from :";
			cin >> arr2;
			char arr3[20];
			cout << "enter the route to :";
			cin >> arr3;
			Bus obj1(2565, arr1, arr2, arr3);
			obj1.display();
		}
		else if (op == 3)
		{
			char a11[20];
			cout << "enter the name of Passenger :";
			cin >> a11;
			char a12[20];
			cout << "enter the cnic of Passenger :";
			cin >> a12;

			Passenger p(a11, a12);
			p.ddisplay();
		}
		else if (op == 1)
		{
			int h, m;
			cout << "enter the time :";
			cin >> h >>m;
			char f[20];
			cout << "enter the ticket type :";
			cin >> f;
			Reservation r(h, m, 0, f);

			r.ddd(count);
			count = count + 1;
		}
		else if (op == 4)
		{
			exit(0);
		}
	}
}
void readfile(fstream& fin)
{
	char arr[25];
	while (!fin.eof())
	{
		fin.getline(arr, 25);
		cout << arr << endl;
	}
}