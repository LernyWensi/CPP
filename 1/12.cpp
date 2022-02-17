#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double triange_side, triange_area;

  cout << "Enter the side of the triangle: ";
  cin >> triange_side;

  triange_area = pow(triange_side, 2) * sqrt(3) / 4;

  cout << "The area of this triange = " << triange_area;
}