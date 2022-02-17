#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str;
   
   cout << "Enter string: ";
   getline(cin, str);
   cout << "Length of string = " << str.length();
   
   str.erase(str.find_last_not_of(' ') + 1);
   
   cout << "\n\nSentence after string: " << str << endl;
   cout << "Length of string = " << str.length();
}