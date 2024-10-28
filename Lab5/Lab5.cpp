#include <iostream>
#include <conio.h>
#include "Vector.h"
using namespace std;

int main() {
	Vector vector1, vector2, add, sub, dotp;
	float dot, mag1, mag2;
	cout << "\t\t\tVector calculation\n";
	vector1.GetVector("first");
	cout << "\n";
	vector2.GetVector("second");
	add.AddVector(vector1, vector2);
	sub.SubtractVector(vector1, vector2);
	dot=dotp.DotProduct(vector1, vector2);
	mag1 = vector1.Magnitude(vector1);
	mag2 = vector2.Magnitude(vector2);

	cout << "V1 + V2 = ";
	add.ShowVector();
	cout << "\n\nV1 - V2 = ";
	sub.ShowVector();
	cout << "\n\nV1 . V2 = "<< dot;
	cout << "\n\nMagnitude of V1 = " << mag1;
	cout << "\n\nMagnitude of V2 = " << mag2;

	_getch(); 
	return 0;
}