#include "module.h"
#include <iostream>

using namespace std;

int isVowel(char letter)
{
    char vowel[] = "aeiouy";
    int vowelSize = sizeof(vowel) / sizeof(vowel[0]);
    
    for(int i = 0; i < vowelSize; i++) {
        if (letter == vowel[i]) return 1;
    }
    
    return 0;
}

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
