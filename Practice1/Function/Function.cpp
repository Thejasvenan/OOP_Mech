#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
double MaxMinAvg(const int[], int, int&, int&);
//The array is passed as a constant to prevent accidental changes
//Integer variable is to pass the array size to improve the scalability
//The two references are passed to get the Maximum and Minimum out
//The function returns the Average as required by the problem information

int main()
{
	const int TotalStudents = 5;  //This is the total number of students. If number of students changes, for example, to test, simply change this number.
	int Marks[TotalStudents];   //Array is created to accommodate marks of studnets. 
	int max = 0, min = 0; // variables are created and initialized at the same time
	double avg = 0;

	for (int i = 0; i < TotalStudents; i++)
	{
		do
		{
			cout << "\nEnter the mark of student No." << i + 1 << "\t";
			cin >> Marks[i];
		} while ((Marks[i] < 0) || (Marks[i] > 100));

	}
	avg = MaxMinAvg(Marks, TotalStudents, max, min);
	//Note: When passing array, you don't need to use the address-of operator (&) because, an array is passed by reference by default

	//cout << setprecision(3); //Just in case if your compiler does not show off decimal places, simple uncomment this code
	//cout << fixed;

	cout << "\n\nAverage mark:\t" << avg;
	cout << "\nMaximum mark:\t" << max;
	cout << "\nMinimum mark:\t" << min;
	_getch();
	return 0;
}

double MaxMinAvg(const int mark[], int size, int& maximum, int& minimum)
{
	int total = 0;
	double average = 0;
	maximum = minimum = mark[0];
	for (int i = 0; i < size; i++) // Following is a simple algorithm to find maximum and minimum. 
	{
		if (mark[i] > maximum)
			maximum = mark[i];

		if (mark[i] < minimum)
			minimum = mark[i];

		total += mark[i];
	}
	average = static_cast <double> (total) / size; //Because "total" and "size" are of integer type, explicit conversion is applied to convert it to double
	return average;
}