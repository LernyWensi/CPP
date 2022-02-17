#include <iostream>
#include <string>

using namespace std;

int main()
{
  double number;
  int counter = 0;

  cout << "Enter your number: ";
  cin >> number;

  for (int i = 0; i < to_string(number).length(); i++)
  {
    counter += (int)to_string(number)[i] % 2 != 0 ? 1 : 0;
  }

  cout << "\nThe number of odd numbers is " << counter;
}