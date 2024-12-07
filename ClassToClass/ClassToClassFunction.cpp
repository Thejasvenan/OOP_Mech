#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//Destination class
class Vec3D
{
private:
	int x, y, z;
public:
	Vec3D();
	Vec3D(int, int, int);
	void Show();
};

//Source class 
class Vec2D
{
private:
	int x, y;
public:
	Vec2D();
	Vec2D(int, int);
	void Show();
	void GetElement(int*, int*);
	operator Vec3D();
};

Vec2D::Vec2D()
{
	x = y = 0;
}

Vec2D::Vec2D(int a, int b)
{
	x = a;
	y = b;
}

void Vec2D::Show()
{
	cout << "\nx =  " << x << "\ty =  "<<y<<endl;
}

void Vec2D::GetElement(int* a, int* b)
{
	*a = x;
	*b = y;
}

Vec2D::operator Vec3D()
{
	int a, b;
	GetElement(&a, &b);
	Vec3D v(a, b, 0);
	return v;
}

Vec3D::Vec3D()
{
	x = y = z = 0;
}

Vec3D::Vec3D(int a, int b,
	int c)
{
	x = a;
	y = b;
	z = c;
}

void Vec3D::Show()
{
	cout << "\nx =  " << x << "\ty =  " << y << "\tz = " << z << endl;
}


void main()
{
	Vec2D v2d(10, 15);
	Vec3D v3d = v2d;
	v3d.Show();
	_getch();
}