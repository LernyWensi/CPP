#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  for (int i = 1; i <= 9; i++)
  {
    for (int j = 1; j <= 9; j++)
    {
      cout << setw(5) << i * j << " ";
    }

    cout << endl;
  }
}