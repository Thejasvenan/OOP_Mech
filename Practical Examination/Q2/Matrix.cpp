#include <iostream>
#include "Matrix.h"

Matrix::Matrix() {
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			element[i][j] = 0;
		}
	}
}

Matrix Matrix::operator+(Matrix m)
{
	Matrix sum;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum.element[i][j] = element[i][j]+m.element[i][j];
		}
	}
	return sum;
}

Matrix Matrix::operator-(Matrix m)
{
	Matrix dif;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dif.element[i][j] = element[i][j] - m.element[i][j];
		}
	}
	return dif;
}

Matrix Matrix::operator+=(Matrix m)
{
	Matrix add;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			add.element[i][j] += m.element[i][j];
		}
	}
	return add;
}

Matrix Matrix::operator*(double k)
{
	Matrix mul;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mul.element[i][j] = element[i][j] * k;
		}
	}
	return mul;
}

Matrix operator*(double k, Matrix m)
{
	Matrix mul;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			mul.element[i][j] = m.element[i][j] * k;
		}
	}
	return mul;
}