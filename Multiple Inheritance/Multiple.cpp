#include<iostream>
#include<conio.h>
#include"C.h"
#include"A.h"
#include"B.h"

using namespace std;

int main()
{
	A Obj_A(2,3);
	B Obj_B(5,6);
	C Obj_C(5, 6, 7, 8);

	cout << "\nShow of A is called\n";
	Obj_A.Show();

	cout << "\nShow of B is called\n";
	Obj_B.Show();

	cout << "\nShow of C is called\n";
	Obj_C.Show();


	_getch();
	return 0;
}