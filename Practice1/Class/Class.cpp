#include <iostream>
#include <conio.h>

using namespace std;

class Vector
{
private:
    int x, y, z;

public:
    void ADD(Vector, Vector);
    void SUB(Vector, Vector);
    void Print();
    void SetVector(int a, int b, int c);
};

int main()
{
    int cord_x, cord_y, cord_z;
    Vector v1, v2, add, sub;
    cout << "\nEnter x of vector 1\t";
    cin >> cord_x;
    cout << "\nEnter y of vector 1\t";
    cin >> cord_y;
    cout << "\nEnter z of vector 1\t";
    cin >> cord_z;

    v1.SetVector(cord_x, cord_y, cord_z);

    cout << "\nEnter x of vector 2\t";
    cin >> cord_x;
    cout << "\nEnter y of vector 2\t";
    cin >> cord_y;
    cout << "\nEnter z of vector 2\t";
    cin >> cord_z;

    v2.SetVector(cord_x, cord_y, cord_z);
    
    add.ADD(v1,v2);
    sub.SUB(v1,v2);
    cout << "\n\n Vector v1 = ";
    v1.Print();

    cout << "\n Vector v2 = ";
    v2.Print();

    cout << "\n\n v1 + v2 = ";
	add.Print();

	cout << "\n v1 - v2 = ";
	sub.Print();
	_getch();
    return 0;
}

void Vector::SetVector(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void Vector::ADD(Vector a, Vector b)
{
    x = a.x + b.x;
    y = a.y + b.y;
    z = a.z + b.z;
}

void Vector::SUB(Vector m, Vector n)
{
    x = m.x - n.x;
    y = m.y - n.y;
    z = m.z - n.z;
}

void Vector::Print()
{
    cout << x << "i\t"
         << (y >= 0 ? "+" : "") << y << "j\t"
         << (z >= 0 ? "+" : "") << z << "k";
}