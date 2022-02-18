#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    string targetWord;
    string textFromFile;
    string word;
    int wordCounter = 0;
    
    file.open("text.txt", ios::in);
    getline(file, textFromFile);
    textFromFile += ' ';
    
    cout << "Text from file: " << textFromFile << endl;
    
    cout << "\nEnter word to count: ";
    cin >> targetWord;
    cout << endl;
    
    for (int i = 0; i < textFromFile.length(); i++)
    {
        if (textFromFile[i] == ' ')
        {
            if (word == targetWord) wordCounter += 1;
            word = "";
        }
        else
        {
            word += textFromFile[i];
        }
    }
    
    if (wordCounter > 0) 
    {
        cout << "File includes your word " << wordCounter << " times"; 
    }
    else
    {
        cout << "File doesn't include your word";
    }
    
    file.close();
}
