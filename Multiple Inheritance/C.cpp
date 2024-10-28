#include<iostream>
#include"C.h"
#include"A.h"
#include"B.h"

using namespace std;
C::C()
{
	pvt_x_c = prtd_y_c = prtd_y_b = prtd_y_a = 0;  // prtd_y_b and prtd_y_a are inherited from B and A, respectively
}

C::C(int a, int b, int c, int d)
{
	pvt_x_c = a;
	prtd_y_c = b;
	prtd_y_b = c; //inherited from B
	prtd_y_a = d; //inherited from A
}

void C::Show()
{
	cout << "x = " << pvt_x_c << "\ty = " << prtd_y_c << "\ty (of b) = " << prtd_y_b << "\ty (of a) = " << prtd_y_a;
}

C::~C()
{
	cout << "\nC is destroyed\n";
}