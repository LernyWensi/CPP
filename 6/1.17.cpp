#include <iostream>
#include <string>

using namespace std;

int main() 
{
   string str;
   bool includePalindrome = false;
   
   cout << "Enter string: ";
   getline(cin, str);
   str += " ";
   
   string word;
   
   for (int i = 0; i < str.length(); i++)
   {   
       if (str[i] == ' ')
       {
           if(word == string(word.rbegin(), word.rend()))
           {
                includePalindrome = true;
                break;
           };
           
           word = "";
       }
       else
       {
           word += str[i];
       }
   }
   
   cout << "\nThis string " << (includePalindrome ? "DOES include palindrome" : "does NOT include palindrome");
}