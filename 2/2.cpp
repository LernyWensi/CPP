#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  double a, b, c;
  string condition;

  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  printf("\na = %.2f | b = %.2f | c = %.2f\n", a, b, c);

  condition = (c < b && b < a) ? "true" : "false";

  cout << "\nc < b < a is " << condition;
}