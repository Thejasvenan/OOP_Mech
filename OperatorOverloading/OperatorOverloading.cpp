#include <iostream>
#include "vector.h"
#include <conio.h>
using namespace std;

void main()
{
	vector a(2, 3.5, 6);
	vector b(2, 3.5, 6);
	vector d(5, -3, 8);
	vector c, e, f, g;
	c = a + b + d; // The overloaded + operator function is called
	e = a * 2; // The overloaded * operator function is called
	f = (a * 3) + (2 * b); // The overloaded * operator function is called
	g = (a * 3) + (b * 2); // The overloaded + and - operator functions are called
	if (a == b)
		{ cout << "a and b vectors are equal"; }
	else 
		{ cout << "a and b vectors are not equal"; }
	d += a;
	d.show();
	/*c.show();
	e.show();
	f.show();
	g.show();*/
	_getch();
}