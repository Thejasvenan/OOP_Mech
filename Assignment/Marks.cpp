#include<iostream>
#include "Marks.h"
using namespace std;

Marks::Marks()
{
	m_sub1 = 0;
	m_sub2 = 0;
	m_sub3 = 0;
	strcpy_s(Name, "");
}

void Marks::SetMarks(float sub1, float sub2, float sub3)
{
	m_sub1 = sub1;
	m_sub2 = sub2;
	m_sub3 = sub3;
}

void Marks::SetName(char name[])
{	
	strcpy_s(Name, name);
}

