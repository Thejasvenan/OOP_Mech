#include<iostream>
#include<conio.h>
using namespace std;

double Max(int, double*);

int main()
{
	int size;
	cout << "Enter the number of elements: "; 
	cin >> size; 

	double* pAry = new double[size]; // allocate memory in freestore for "size" number of integer elements
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element #" << i + 1 << ":\t";
		cin >> *(pAry + i); // write the value in the i th elemnt of dynamic array
	}
	cout << "\n\nThe maximum value is: " << Max(size, pAry) << endl;

	delete[] pAry; // deallocate the memory (Pointer is not deleted)
	pAry = NULL; // set the pointer to NULL
	return 0;
	_getch();
}

double Max(int s, double *ptr)
{
	double max = ptr[0];
	for (int i = 1; i < s; i++)
	{
		if (ptr[i] > max)
		{
			max = ptr[i];
		}
	}
	return max;
}

/*
int main()
{
	int ary[5] = { 0,1,2,3,4 };
	cout << "The size of integer \t" << sizeof(int) << endl;

	cout << "\nFirst element of the array is: " << *ary << endl;
	cout << "\nSecond element of the array is: " << *(ary + 1) << endl;
	_getch();
	return 0;

}
*/
