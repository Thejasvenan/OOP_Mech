#include<iostream>
#include<conio.h>

#include"D.h"

using namespace std;

int main()
{
	A Obj_A(2,3);
	B Obj_B(1, 2, 3);
	C Obj_C(5, 6, 7, 8);
	D Obj_D(5, 6, 7, 8,9);

	cout << "\nShow of A is called\n";
	Obj_A.Show();

	cout << "\nShow of B is called\n";
	Obj_B.Show();

	cout << "\nShow of C is called\n";
	Obj_C.Show();

	cout << "\nShow of D is called\n";
	Obj_D.Show();


	_getch();
	return 0;
}