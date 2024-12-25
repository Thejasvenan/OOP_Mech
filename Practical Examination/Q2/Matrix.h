#pragma once
#include <iostream>
#include "Matrix_Base.h"

class Matrix : public MatrixBase
{	
public :
	Matrix(); //initializing matrix
	Matrix operator+(Matrix);
	Matrix operator-(Matrix);
	Matrix operator+=(Matrix);
	Matrix operator*(double);
	friend Matrix operator*(double, Matrix);

};