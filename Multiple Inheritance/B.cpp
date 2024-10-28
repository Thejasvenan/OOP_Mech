#include<iostream>
#include"B.h"

using namespace std;

B::B()
{
	pvt_x_b = prtd_y_b = 0;
}


B::B(int a, int b)
{
	pvt_x_b = a;
	prtd_y_b = b;

}
void B::Show()
{
	cout << "x = " << pvt_x_b << "\ty = " << prtd_y_b;
}

B::~B()
{
	cout << "\nB is destroyed\n";
}
