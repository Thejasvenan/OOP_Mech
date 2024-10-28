#include <iostream>
#include <conio.h>
using namespace std;

double Max(int, double*);
double Min(int, double*);
float Average(int, double*);
double Median(int, double*);

int main()
{
    char Response = 'N';
    do {
        int size;
        cout << "Enter the number of data points :\t";
        cin >> size;

        double* pPoint = new double[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Enter the data #" << i + 1 << "\t";
            cin >> *(pPoint + i);
        }
        cout << "#############################################";
        cout << "\nStatistics about the data inputs" << endl;

        cout << "Maximum value :\t" << Max(size, pPoint) << endl;
        cout << "Minimum value :\t" << Min(size, pPoint) << endl;
        cout << "Average value :\t" << Average(size, pPoint) << endl;
        cout << "Median value :\t" << Median(size, pPoint) << endl;

        delete[]pPoint;
        pPoint = nullptr;
        cout << "\n\nDo you want to enter the data again? (Y/N)\t";
        cin >> Response;
        cout << "\n";
    } while (Response == 'Y');
    _getch();
}

double Max(int s, double* p)
{
    double max = *p;
    for (int i=0; i < s; i++)
    {
        if (*(p+i) > max)
            max = *(p+i);
    }
    return max;
}

double Min(int s, double* p)
{
    double min = *p;
    for (int i=0; i < s; i++)
    {
        if (p[i] < min)
            min = *(p+i);
    }
    return min;
}

float Average(int s, double* p)
{
    float avg;
    double total=0;
    for (int i=0; i < s; i++)
    {
        total += *(p+i);
    }
    avg = total / s;
    return avg;
}

double Median(int s, double* p)
{
    for (int i=0; i < s; i++)
    {
        int k = i;
        while (k > 0 && p[k - 1] > p[k])
        {
            double temp;
            temp = p[k - 1];
            p[k - 1] = p[k];
            p[k] = temp;
            k -= 1;
        }
    }
    if (s % 2 == 0) {
        return (p[s / 2] + p[s / 2 - 1]) / 2;
    }
    else return p[(s +1)/2-1];
}