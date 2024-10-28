#include <iostream>
#include "Matrix.h"
#include <conio.h>
using namespace std;

int main()
{
	double M[3][3];
	double d;
	cout << "Enter the elements of the matrix : \n";
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> M[i][j];
		} cout << endl;
	}
	cout << "Scalar value : ";
	cin >> d;
	double Ar1[3][3] = { { 2 , 3 , 4 }, {1 , 7 , 4}, {6, 1, 1} };

	Matrix A(M), B(Ar1), Add, Sub, Sc_Multi;
	cout << "Matrix A : \n";
	A.Print();
	cout << "\n\nMatrix B : \n";
	B.Print();
	cout << endl;

	Add = A + B;
	Sub = A - B;
	Sc_Multi = A * d;
	
	
	cout << "A + B = \n";
	Add.Print();
	cout << "A - B = \n";
	Sub.Print();
	cout << "k . A = \n";
	Sc_Multi.Print();
	B *= d;
	cout << "Matrix B after assignment by scalar multiplication : \n";
	B.Print();

	_getch();
	return 0;
}
