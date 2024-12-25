#include<iostream>
#include "Matrix_Base.h"
using namespace std;

MatrixBase::MatrixBase()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			element[i][j] = 0;
		}
	}
}

void MatrixBase::SetMatrix(double m[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			element[i][j] = m[i][j];
		}
	}
}

void MatrixBase::Show()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" << element[i][j];
		} 
		cout << endl;
	}
}