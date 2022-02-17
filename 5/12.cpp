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

int main() 
{
    char letter;

    cout << "Enter letter: ";
    cin >> letter;
    
    cout << "\nLetter is " << (isVowel(letter) ? "vowel" : "not vowel");
}