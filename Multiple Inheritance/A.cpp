#include<iostream>
#include"A.h"

using namespace std;

A::A()
{
	pvt_x_a = prtd_y_a = 0;
}

A::A(int a, int b)
{
	pvt_x_a = a; 
	prtd_y_a = b;
}

A::~A()
{
	cout << "\nA is destroyed\n";
}

void A::Show()
{
	cout << "x = " << pvt_x_a << "\ty = " << prtd_y_a;
}
