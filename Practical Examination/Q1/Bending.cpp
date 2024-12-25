#include <iostream>
#include <cmath>
#include "Bending.h"

Bending::Bending()
{
	Load_kN = Length_m = w_cm = h_cm = r_cm = 0;
}

void Bending::SetDim(double h, double w, double l)
{
	h_cm = h;
	w_cm = w;
	Length_m = l;
}

void Bending::SetDim(double r, double l)
{
	r_cm = r;
	Length_m = l;
}

void Bending::SetLoad(double load)
{
	Load_kN = load;
}

double Bending::GetStress(double x, char shape)
{
	double I; // Second moment of Inertia
	double y; // Distance to neutral axis
	double M; // Bending Moment at x
	double Stress; // Bending Stress at x
	if (shape == 's' || shape == 'S') {
		I = (w_cm * pow(h_cm, 3)) / 12;
		y = h_cm / 2;
	}
	else if (shape == 'c' || shape == 'C') {
		I = (PI * pow(r_cm, 4)) / 4;
		y = r_cm;
	}
	M = Load_kN * (Length_m - x);
	Stress = (M * y) / I;  
		
	return (Stress*1000); //Converted to give it in MPa
}