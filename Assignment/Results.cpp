#include<iostream>
#include "Results.h"
using namespace std;
void Results::PrintResults()
{	
	Results::SetResults();
	cout << Name <<"\t\t"<< Result << endl;
}

void Results::SetResults()
{
	float total = m_sub1 + m_sub2 + m_sub3;
	if ((m_sub1>30)&&(m_sub2>30)&&(m_sub3>30))
		if (total / 3 >= 50)
			Result = 'P';
		else 
			Result = 'F';
	else
		Result = 'F';
}

