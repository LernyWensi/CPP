#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main()
{
  srand(time(NULL));

  int rows = 10;
  int columns = 5;

  int random_end = 5;
  int random_start = 0;

  int matrix[columns][rows];

  for (int column = 0; column < columns; column++)
    for (int row = 0; row < rows; row++)
      matrix[column][row] = rand() % random_end + random_start;

  for (int row = 0; row < rows; row++)
  {
    for (int column = 0; column < columns; column++)
      cout << setw(5) << matrix[column][row] << " ";

    cout << endl;
  }

  cout << "\n";

  for (int column = 0; column < columns; column++)
  {
    int null_counter = 0;
    int first_null_position;
    bool first_null_check = true;

    for (int row = 0; row < rows; row++)
    {
      if (matrix[column][row] == 0)
      {
        null_counter += 1;

        if (first_null_check)
        {
          first_null_position = row;
          first_null_check = false;
        }
      }
    }

    if (!first_null_check)
      matrix[column][first_null_position] = null_counter;
  }

  cout << "Matrix after condition\n"
       << endl;

  for (int row = 0; row < rows; row++)
  {
    for (int column = 0; column < columns; column++)
      cout << setw(5) << matrix[column][row] << " ";

    cout << endl;
  }
}