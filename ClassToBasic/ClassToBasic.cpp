#include <cmath>
#include <iostream>
using namespace std;	

class vector
{
private:
	double x, y, z;
public:
	vector(double, double, double);
	vector();
	operator double();
};

vector::vector(double p, double q, double r)
{
	x = p; y = q; z = r;
}

vector::vector()
{
	x = y = z = 0;
}

vector::operator double()
{
	double sum = x * x + y * y + z * z;     // since this is a member function, all the private variables are accessible to this
	sum = sqrt(sum);
	return sum;
}

int main()
{
	vector a(1, 2, 2);
	double z;
	z = a;
	cout << "The magnitude of a is equal to  " << z << endl << endl;//3
	return 0;
}