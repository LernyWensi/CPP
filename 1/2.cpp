#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const double pi = acos(-1);
  double circle_radius, circle_area;

  cout << "Enter the radius of the circle: ";
  cin >> circle_radius;

  circle_area = pi * pow(circle_radius, 2);

  cout << "The area of this circle = " << circle_area;
}