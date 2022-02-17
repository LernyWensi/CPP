#include <iostream>

using namespace std;

int main()
{
  int first_array[] = {1, 2, 3, 4, 5, 6, 7};
  int first_array_size = sizeof(first_array) / sizeof(first_array[0]);
  int second_array[] = {1, 2, 3, 4};
  int second_array_size = sizeof(second_array) / sizeof(second_array[0]);
  
  int counter = 0;

  for (int i = 0; i < first_array_size; i++)
    for (int j = 0; j < second_array_size; j++)
      counter += first_array[i] == second_array[j] ? 1 : 0;

  cout << "Number of matches: " << counter;
}