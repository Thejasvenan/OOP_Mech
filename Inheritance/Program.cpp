#include<iostream>
#include"Child.h"
#include<conio.h>
using namespace std;
void CallClass();

int main()
{
	cout << "\nCallClass() function is called";
	CallClass();
	cout << "\n\nWe are returned from CallClass()";
	//_getch();
	return 0;
}

void CallClass()
{
	child obj_chd;
	cout << "\nI'm in CallClass Now";
}