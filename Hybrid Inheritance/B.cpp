#include<iostream>
#include"B.h"

using namespace std;

B::B()
{
	pvt_x_b = prtd_y_b = 0, prtd_y_a =0;  ////Own members and inherited member from A
}


B::B(int a, int b, int c)
{
	pvt_x_b = a;
	prtd_y_b = b;
	prtd_y_a = c; // initialize the derived data member as well. 
}
void B::Show()
{
	cout << "x = " << pvt_x_b << "\ty = " << prtd_y_b<<"\ty (of a) = "<< prtd_y_a;
}

B::~B()
{
	cout << "\nB is destroyed\n";
}
