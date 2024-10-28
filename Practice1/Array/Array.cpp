#include<iostream>	
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	int Ary1[5];
	int Ary2[5] = { 0 };
	int Ary3[5] = { 1, 2, 3, 4, 5 };
	int Ary6[] = { 1,5,3,2 };
	int Ary4[5]
	{
		1, 5, 3, 15, 5
	};
	int Ary5[5] = { 1, 3 };

	int TwoDAry1[3][2] = { 1,2,3,4,5 };
	int TwoDAry2[3][2] = { {1,2} , {3,4}, {5,6} };
	int TwoDAry3[3][3]
	{
		{0,0,0},
		{1,1},
		{2,2,2}
	};

	for (int i = 0; i < 5; i++) 
	{
		cout << "\nEnter number:\t";
			cin >> (Ary1[i]);
	}
	cout << "\nSets of numbers are\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Ary1[i] << "\t";
	}
	/*char ChAry1[20], ChAry2[20];
	cout << "\nEnter Your name\t";
	cin.getline(ChAry1, 20);

	strncpy_s(ChAry2, ChAry1, 18);
	cout << "Copied Name is\t" << ChAry2;

	cout << "\n\nYour Name is\t" << ChAry1;*/
	
	/*cout << "\nTwoDAry1\n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << TwoDAry1[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\nAry1\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Ary1[i] << "\t";
	}
	cout << "\nAry2\n";
		for (int i = 0; i < 5; i++)
	{
		cout << Ary2[i] << "\t";
	}

	cout << "\nAry3\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Ary3[i] << "\t";
	}

	cout << "\nAry5\n";
	for (int i = 0; i < 5; i++)
	{
		cout << Ary5[i] << "\t";
	}

	*/
	_getch();
	return 0;
}

