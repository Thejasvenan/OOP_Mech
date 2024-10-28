#pragma once
class Matrix {
private :
	double A[3][3];

public :
	Matrix();
	Matrix(double[3][3]);
	Matrix operator+(Matrix);
	Matrix operator-(Matrix);
	Matrix operator*(double);
	friend Matrix operator*(double, Matrix);
	Matrix operator*=(double);
	void Print();
};
