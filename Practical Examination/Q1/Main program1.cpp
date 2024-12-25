#include <iostream>
#include <conio.h>
#include "Bending.h"
using namespace std;

int main()
{   
    char shape;
    double l, w, h, r, p; // length, width, height, radius, point load
    int n; // Number of points
    cout << "Bending Stress Calculation\n";
    cout << "\tCircle <c>" << endl;
    cout << "\tSquare <s>" << endl;

    cout << "\nSelect the shape <c or s>\t";
    cin >> shape;

    cout << "\nProvide the beam dimensions in the given units\n";
    if (shape == 's' || shape == 'S') {
        cout << "\nLength <m>\t";
        cin >> l;
        cout << "\nWidth <cm>\t";
        cin >> w;
        cout << "\nHeight <cm>\t";
        cin >> h;
    }
    else if (shape == 'c' || shape == 'C') {
        cout << "\nLength <m>\t";
        cin >> l;
        cout << "\nRadius <cm>\t";
        cin >> r;
    }

    cout << "\n\nProvide the Loading and analysis details\n";
    cout << "Point Load <kN>\t";
    cin >> p;
    cout << "\nNumber of points required\t";
    cin >> n;

    cout << "\n\n";

    cout << "Stress distribution\n\n";

    Bending B;
    if (shape == 's' || shape == 'S') {
        B.SetDim(h, w, l);
    }
    else if (shape == 'c' || shape == 'C') {
        B.SetDim(r, l);
    }
    B.SetLoad(p);
    double k = l / n;
    cout << "\tDistance" << "\tStress <MPa>" << endl;
    for (double i = 0; i <= l; i += k)
    {
        cout << "\t" << i << "\t\t" << B.GetStress(i, shape) << endl;
    }
    _getch();
    return 0;
}