#include <iostream>
#include "Results.h"
#include <conio.h>
using namespace std;

int main()
{	
	const int StudentCount = 3;
	Results Student[StudentCount]; //Array of objects of class Results
	for (int i = 0; i < StudentCount; i++)
	{	
		char name[20];
		float sub1, sub2, sub3;
		cout << "Enter the name of the student " << i + 1 << "\t";
		cin.getline(name,20);
		Student[i].SetName(name);
		cout << "\nMarks of " << name << endl;
		cout << "Subject 1\t";
		cin >> sub1;
		cout << "Subject 2\t";
		cin >> sub2;
		cout << "Subject 3\t";
		cin >> sub3;
		cin.ignore();
		Student[i].SetMarks(sub1, sub2, sub3);
		cout << "\n\n\n";
	}	
	cout << "Examination Results - <P - Pass , F - Fail>\n" << endl;
	for (int i = 0; i < StudentCount; i++)
	{
		Student[i].PrintResults();
	}
	_getch();
}
