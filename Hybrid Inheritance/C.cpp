#include<iostream>
#include"C.h"

using namespace std;
C::C()
{
	pvt_x_c = prtd_y_c =  prtd_y_a = 0; //Own members and inherited member from A
}

C::C(int a, int b, int c, int d)
{
	pvt_x_c = a;
	prtd_y_c = b;
	prtd_y_a = d;
}

void C::Show()
{
	cout << "x = " << pvt_x_c << "\ty = " << prtd_y_c << "\ty (of a) = " << prtd_y_a;
}

C::~C()
{
	cout << "\nC is destroyed\n";
}