#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
  srand(time(NULL));

  int matrix_order, target_column;
  int random_end = 9;
  int random_start = 1;

  cout << "Enter matrix order: ";
  cin >> matrix_order;

  cout << "Enter target column: ";
  cin >> target_column;
  target_column -= 1;
  cout << endl;
  
  int *matrix = new int[matrix_order * matrix_order];
  
  for (int i = 0; i < matrix_order; i++)
  {
    for (int j = 0; j < matrix_order; j++)
    {
      matrix[i * matrix_order + j] = rand() % random_end + random_start;
      cout << setw(5) << matrix[i * matrix_order + j] << " ";
    }

    cout << endl;
  }

  int diagonal_element = matrix[target_column * matrix_order + target_column];
  cout << "\nDiagonal element = " << diagonal_element << "\n\n";

  for (int i = 0; i < matrix_order; i++)
  {
    matrix[i * matrix_order + target_column] -= diagonal_element;
  }

  for (int i = 0; i < matrix_order; i++)
  {
    for (int j = 0; j < matrix_order; j++)
    {
      cout << setw(5) << matrix[i * matrix_order + j] << " ";
    }

    cout << endl;
  }
}