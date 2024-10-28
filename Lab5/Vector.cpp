#include <iostream>
#include "Vector.h"
using namespace std;


void Vector::AddVector(Vector v1, Vector v2)
{
	x = v1.x + v2.x;
	y = v1.y + v2.y;
	z = v1.z + v2.z;
}

void Vector::SubtractVector(Vector v1, Vector v2)
{
	x = v1.x - v2.x;
	y = v1.y - v2.y;
	z = v1.z - v2.z;
}

double Vector::DotProduct(Vector v1, Vector v2)
{
	double dotproduct = (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
	return dotproduct;
}

float Vector::Magnitude(Vector v)
{
	float magnitude = sqrt((v.x * v.x) + (v.y * v.y) + (v.z * v.z));
	return magnitude;
}

void Vector::GetVector(string s)
{
	cout << "Enter the element \"x\" of " << s << " vector:";
	cin >> x;
	cout << "Enter the element \"y\" of " << s << " vector:";
	cin >> y;
	cout << "Enter the element \"z\" of " << s << " vector:";
	cin >> z;
}
void Vector::ShowVector()
{
	cout << x << "i\t"
		<< (y >= 0 ? "+" : "") << y << "j\t"
		<< (z >= 0 ? "+" : "") << z << "k";
}