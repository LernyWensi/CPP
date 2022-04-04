#include <iostream>

using namespace std;

int max(double a, double b)
{
    return a > b ? a : b;
}

int main() 
{
    double a, b, c, d;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    cout << "\nMax value = " << max(max(a, b), max(c, d));
}