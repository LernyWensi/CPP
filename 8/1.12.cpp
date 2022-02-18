#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream fileForRead;
    fstream fileForWrite;
    string stringWithSpaces;
    
    fileForRead.open("fileForRead.txt", ios::in);
    getline(fileForRead, stringWithSpaces);
    fileForRead.close();
    
    fileForWrite.open("fileForWrite.txt", ios::out);
    
    for (int i = 0; i < stringWithSpaces.length(); i++)
    {
        if (stringWithSpaces[i] == ' ' && stringWithSpaces[i + 1] == ' ') continue;
        fileForWrite << stringWithSpaces[i];
    }

    
    fileForWrite.close();
}
