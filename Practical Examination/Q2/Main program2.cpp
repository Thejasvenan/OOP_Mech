#include <iostream>
#include <conio.h>
#include "Matrix.h"
using namespace std;

int main()
{
	int n; // number of matrices
	cout << "What is the number of matrices required?\t";
	cin >> n;
	cout << "\nProvide the matrix elements\n\n" << endl;
	Matrix* m;
	m = new Matrix[n];
	for (int i = 0; i < n; i++)
	{	
		double Ary[3][3];
		cout << "Elements of Matrix " << i + 1 << endl;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "Element r[" << i << "]c[" << j << "]\t";
				cin >> Ary[i][j];
			}
		}
		m[i].SetMatrix(Ary);
		cout << endl; 
	}

	for (int i = 0; i < n; i++)
	{
		cout << "Matrix " << i + 1 << endl;
		m[i].Show();
		cout << endl;
	}

	// Sum of all matrices
	cout << "Sum of all matrices" << endl;
	Matrix sum;
	sum = m[0];
	for (int i = 1; i < n; i++)
	{
		sum = sum + m[i];
	}
	sum.Show();

	// 2A + 3B
	cout << "Matrices 2A + 3B" << endl;
	Matrix result1;
	result1 = 2 * m[0] + 3 * m[1];
	result1.Show();
	cout << endl;

	// 5B - 3A
	cout << "Matrices 5B - 3A" << endl;
	Matrix result2;
	result2 = 5 * m[1] - 3 * m[0];
	result2.Show();
	cout << endl;
	
	_getch();
	return 0;
}