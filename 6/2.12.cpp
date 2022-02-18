#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, word;
    int wordTargetLength, wordCounter;
    wordCounter = wordTargetLength = 0;
    
    cout << "Enter string: ";
    getline(cin, str);
    str += ' ';
    
    cout << "Enter word target length: ";
    cin >> wordTargetLength;
    cout << endl;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            if (word.length() == wordTargetLength) wordCounter += 1;
            word = "";
        }
        else 
        {
            word += str[i];
        }
    }
    
    cout << "Number of words that match length: " << wordCounter;
}
