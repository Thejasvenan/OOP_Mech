#pragma once
using namespace std;
class Vector
{
private:
	double x, y, z;

public:
	void AddVector(Vector, Vector);
	void SubtractVector(Vector, Vector);
	void GetVector(string);
	void ShowVector();
	double DotProduct(Vector, Vector);
	float Magnitude(Vector);
};
