#include <iostream>
#include "vector.h"
using namespace std;

vector::vector(double p, double q, double r)
{
	x = p; y = q; z = r;
}

vector::vector()
{
	x = y = z = 0;
}

void vector::show()
{
	cout << endl << x << "\t" << y << "\t" << z << endl;
}

vector vector::operator+(vector l)  // Overloaded + operator function where l is the vector to be added
{
	vector sum; // Vector of summation
	sum.x = x + l.x;
	sum.y = y + l.y;
	sum.z = z + l.z;

	return sum;
}

vector operator-(vector n, vector l)  // Friend Overloaded - operator function where l is the vector to be subtracted
{
	vector diff; // Vector of difference
	diff.x = n.x - l.x;
	diff.y = n.y - l.y;
	diff.z = n.z - l.z;

	return diff;
}

vector vector::operator*(double k)  // Overloaded * operator function where k is the scalar to be multiplied
{
	vector prod; // Vector of product
	prod.x = k * x;
	prod.y = k * y;
	prod.z = k * z;

	return prod;
}

vector operator*(double k, vector n)
{
	vector prod;
	prod.x = k * n.x;
	prod.y = k * n.y;
	prod.z = k * n.z;
	return prod;
}

bool vector::operator==(vector l)
{
	return (x == l.x && y == l.y && z == l.z);
}

vector vector::operator+=(vector l)
{
	x += l.x;
	y += l.y;
	z += l.z;
	return vector(x, y, z);
}