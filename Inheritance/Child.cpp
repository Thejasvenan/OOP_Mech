#include<iostream>
#include"Child.h"

using namespace std;

child::child()
{
	b = 0;
	cout << "\nConstructor of Child is called...";
}

child::~child()
{
	cout << "\nDestructor of Child is called...";
}

void child::show()
{
	cout << "show function";
}