#include <iostream>

using namespace std;

int main() 
{
    double a, b, c, d;

    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    
    cout << "\nMax value = " << max(max(a, b), max(c, d));
}