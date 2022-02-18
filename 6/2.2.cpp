#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string word;
    
    cout << "Enter string: ";
    getline(cin, str);
    str.insert(0, " ");
    cout << endl;
    
    for (int i = str.length(); i >= 0; i--)
    { 
        if (str[i] == ' ')
        {
            word = string(word.rbegin(), word.rend());
            cout << word << " ";
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
}
