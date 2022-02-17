#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    char letter;
    int wordCounter = 0;
    
    cout << "Enter string: ";
    getline(cin, str);
    
    cout << "\nEnter letter: ";
    cin >> letter;
    
    if (str[0] == letter) wordCounter += 1;
    
    for (int i = 0; i < str.length(); i++)
        if (str[i] == ' ' && str[i + 1] == letter) wordCounter += 1;
    
    cout << "\nWord that starts with your letter: " << wordCounter;
}