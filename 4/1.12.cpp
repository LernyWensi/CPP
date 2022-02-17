#include <iostream>

using namespace std;

int main()
{
  int array[] = {11, 22, 33, 44, 55, 66, 77, 88, 55};
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  int target;
  int more, less, equal;

  more = less = equal = 0;

  cout << "Enter the target value: ";
  cin >> target;

  cout << "\nArray: ";
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << array[i] << " ";
    equal += array[i] == target ? 1 : 0;
    more += array[i] > target ? 1 : 0;
    less += array[i] < target ? 1 : 0;
  }

  cout << "\n\nEqual = " << equal << endl;
  cout << "More = " << more << endl;
  cout << "Less = " << less << endl;
}