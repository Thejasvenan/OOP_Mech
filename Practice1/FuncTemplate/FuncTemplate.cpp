#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

template< typename A>
A Max(A[], int);

void main()
{
	const int size = 3;
	int iAry[size], i_max;
	double dAry[size], d_max;

	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter the integer value " << i + 1 << "\t";
		cin >> iAry[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << "\nEnter the floating point value " << i + 1 << "\t";
		cin >> dAry[i];
	}

	i_max = Max(iAry, size);
	d_max = Max(dAry, size);

	cout << "\n\nMaximum of integers :\t" << i_max;
	cout << "\n\nMaximum of floating point numbers :\t" << d_max;
	_getch();
}

template <typename X>
X Max(X ary[], int size)
{
	X max = ary[0];
	for (int k = 0; k < size; k++)
	{
		if (max < ary[k])
			max = ary[k];
	}
	return max;
}