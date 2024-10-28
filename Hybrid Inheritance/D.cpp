#include<iostream>
#include"A.h"
#include"B.h"
#include"C.h"
#include"D.h"

using namespace std;

D::D()
{
	pvt_x_d = prtd_y_d = prtd_y_a = prtd_y_b = prtd_y_c = 0; 
}

D::D(int a, int b, int c, int d, int e)
{
	pvt_x_d = a;
	prtd_y_d = b;
	prtd_y_a = c;
	prtd_y_b = d;
	prtd_y_c = c;
}

void D::Show()
{
	cout << "x = " << pvt_x_d << "\ty = " << prtd_y_d << "\ty (of a) = " << prtd_y_a << "\ty (of b) = " << prtd_y_b << "\ty (of c) = " << prtd_y_c;
}

D::~D()
{
	cout << "\nD is destroyed\n";
}