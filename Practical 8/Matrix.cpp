#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix::Matrix()
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = 0;
		}
	}
}

Matrix::Matrix(double B[3][3])
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = B[i][j];
		}
	}
}

void Matrix::Print()
{	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\n";
}

Matrix Matrix::operator+(Matrix m)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = A[i][j] + m.A[i][j];
		}
	}
	return A;
}

Matrix Matrix::operator-(Matrix m)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = A[i][j] - m.A[i][j];
		}
	}
	return A;
}

Matrix Matrix::operator*(double d)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] = A[i][j] * d;
		}
	}
	return A;
}

Matrix operator*(double d, Matrix m)
{	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			m.A[i][j] = m.A[i][j] * d;
		}
	}
	return m;
}

Matrix Matrix::operator*=(double d)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			A[i][j] *= d;
		}
	}
	return A;
}