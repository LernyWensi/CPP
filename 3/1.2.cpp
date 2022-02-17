#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int start, end;
  int sum = 0;

  cout << "Enter value for interval (start, end): ";
  cin >> start >> end;

  for (int i = start; i <= end; i++)
  {
    sum += i % 2 != 0 ? pow(i, 2) : 0;
  }

  cout << "\nSum of odd numbers^2 in interval = " << sum;
}