#include <iostream>

using namespace std;

int main()
{
  double A, B;
  int counter = 0;

  cout << "Enter (A) and (B): ";
  cin >> A >> B;
  cout << endl;

  for (int i = B - 1; i > A; i--)
  {
    cout << i << " ";
    counter += 1;
  }

  cout << "\n\nAmount of numbers = " << counter;
}