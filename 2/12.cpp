#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  double x, y, z;

  cout << "Enter three numbers: ";
  cin >> x >> y >> z;
  printf("\nx = %.2f | y = %.2f | z = %.2f\n", x, y, z);

  if (x + y + z < 1)
  {
    if (x < y)
      x < z ? x = (y + z) / 2 : z = (y + x) / 2;
    else
      y = (z + x) / 2;
  }
  else
  {
    y < z ? y = (z + x) / 2 : z = (y + x) / 2;
  }

  printf("\nAfter condition:\nx = %.2f | y = %.2f | z = %.2f", x, y, z);
}