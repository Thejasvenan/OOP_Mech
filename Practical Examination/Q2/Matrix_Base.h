#ifndef MATRIX_BASE_H
#define MATRIX_BASE_H

class MatrixBase
{
protected:
	double element[3][3];

public:
	MatrixBase();
	void SetMatrix(double [3][3] ); // initialize each element of the matrix with the values passed into the function. 
	void Show();
};

#endif
