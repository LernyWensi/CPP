#include <iostream>

using namespace std;

void swap_values(int first_array[], int second_array[], int second_array_size, int amount_of_elements)
{
    second_array_size -= 1;
    
    for (int i = 0; i < amount_of_elements; i++)
    {
        int tmp = first_array[i];
        first_array[i] = second_array[second_array_size - i];
        second_array[second_array_size - i] = tmp;
    }
}

void print_array(int array[], int size_of_array)
{
    for (int i = 0; i < size_of_array; i++)
    {
        cout << array[i] << " ";
    }
    
    cout << endl;
}

int main() 
{
    int first_array[] = {1, 2, 3, 4, 5, 6, 7};
    int second_array[] = {8, 9, 10, 11, 12, 13, 14};
    int amount_of_elements = 5;
    
    int first_array_size = sizeof(first_array) / sizeof(first_array[0]);
    int second_array_size = sizeof(second_array) / sizeof(second_array[0]);
    
    cout << "First array: ";
    print_array(first_array, first_array_size);
    cout << "Second array: ";
    print_array(second_array, second_array_size);
    
    swap_values(first_array, second_array, second_array_size, amount_of_elements);
    
    cout << "-----------------" << endl;
  
    cout << "First array: ";
    print_array(first_array, first_array_size);
    cout << "Second array: ";
    print_array(second_array, second_array_size);
}