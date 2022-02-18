#include <iostream>
#include "module.h"

using namespace std;

int main() 
{
    char letter;

    cout << "Enter letter: ";
    cin >> letter;
    
    cout << "\nLetter is " << (isVowel(letter) ? "vowel" : "not vowel");
}