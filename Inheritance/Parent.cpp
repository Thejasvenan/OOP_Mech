#include<iostream>
#include"Parent.h"

using namespace std;

parent::parent()
{
	a = d = k = 0;
	cout << "\nConstructor of Parent is called...";
}

parent::~parent()
{
	cout << "\nDestructor of Parent is called...";
}