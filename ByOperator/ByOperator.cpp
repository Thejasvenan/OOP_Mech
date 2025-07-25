#include <iostream>
#include <conio.h>
using namespace std;

#define CONVERTION 3.28084

using namespace std;

class Distance
{
private:
	double inches;
	int feet;
public:
	Distance();
	int operator=(double);
	void Print();
};

Distance::Distance()
{
	feet = inches = 0;
}


int Distance::operator = (double dist_meters)
{
	double d_inch = dist_meters * CONVERTION * 12;
	feet = int(d_inch / 12);
	inches = d_inch - feet * 12;
	return 0;
}

void Distance::Print()
{
	cout << feet << "'" << "  " << inches << "''\n";
}

void main() {
	Distance d;
	double dist;
	cout << "\nEnter the distance in meters\t";
	cin >> dist;
	d = dist; //conversion of basic data type to user-defined data type
	cout << "Distance in feet and inches   ";
	d.Print();
	_getch();
}