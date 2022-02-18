#include <iostream>
#include "module.h"

using namespace std;

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