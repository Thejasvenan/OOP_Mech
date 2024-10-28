#include<iostream>
#include<conio.h>
#include"Grades.h"

using namespace std;

int main()
{
	const int Studentcount = 3;
	Grades student[Studentcount];
	for (int i = 0; i < Studentcount; i++)
	{
		student[i].SetName(i + 1);
		student[i].SetMarks();
	}
	cout << "\nResults of the students are as follows: " << endl;
	for (int i = 0; i < Studentcount; i++)
	{
		student[i].ShowResults();
	}
	_getch();
}