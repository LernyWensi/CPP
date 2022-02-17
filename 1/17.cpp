#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double cube_side, cube_volume;

  cout << "Enter the side of the cube: ";
  cin >> cube_side;

  cube_volume = pow(cube_side, 3);

  cout << "The volume of this cube = " << cube_volume;
}