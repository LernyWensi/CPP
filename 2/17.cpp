#include <iostream>

using namespace std;

int main()
{
  int a, b;
  double r, s;
  string condition;

  cout << "Enter (a) and (b): ";
  cin >> a >> b;

  cout << "\nEnter (r) and (s): ";
  cin >> r >> s;

  condition = a % b == r || a % b == s ? "true" : "false";

  cout << "\na % b = r (or s) is " << condition;
}