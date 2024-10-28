#include<iostream>
#include<string.h>
#include"Grades.h"
using namespace std;

Grades::Grades()
{
	Mathmarks = 0.0;
	Sciencemarks = 0.0;
	strcpy_s(name, "");
	Grademath = 'F';
	Gradescience = 'F';
}

void Grades::SetName(int s)
{
	cout << "\nEnter the name of the student " << s << " : ";

	cin.getline(name, 25);
}

void Grades::SetMarks()
{
	int mark1 = 0, mark2 = 0;
	cout << "Enter the Mathematics marks of " << name << " : ";
	cin >> mark1;
	cout << "Enter the Science marks of " << name << " : ";
	cin >> mark2;
	cin.ignore();
	if (mark1 >= 0 && mark2 >= 0 && mark1 <= 100 && mark2 <= 100)
	{
		Mathmarks = mark1;
		Sciencemarks = mark2;
	}
	else
	{
		cout << "Invalid marks entered. Enter the correct marks." << endl;
		SetMarks();
	}
}

char Grades::GetGrade(float m)
{
	if (m >= 75)
	{
		return 'A';
	}
	else if (m >= 65)
	{
		return 'B';
	}
	else if (m >= 55)
	{
		return 'C';
	}
	else if (m >= 45)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}

void Grades::SetGrade()
{
	Grademath = GetGrade(Mathmarks);
	Gradescience = GetGrade(Sciencemarks);
}

void Grades::ShowResults()
{
	cout << "\nStudent Name: " << name << endl;
	SetGrade();
	cout << "Mathematics Grade: " << Grademath << endl;
	cout << "Science Grade: " << Gradescience << endl;
	cout << "-----------------------------------";
}
