#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

int main()
{
    srand(time(NULL));
    
    fstream fileWithRealNumbers;
    fstream fileWithSum;
    int amountOfNumbers = 10;
    int randomStart = 1;
    int randomEnd = 50;
    int sum = 0;
    int maxValue = -99999;
    int minValue = 99999;
    
    fileWithRealNumbers.open("fileWithRealNumbers.dat", ios::out);
    
    for (int i = 0; i < amountOfNumbers; i++)
    {
        int numberToWrite = rand() % randomEnd + randomStart;
        
        fileWithRealNumbers << numberToWrite << " ";
        
        if (minValue > numberToWrite) minValue = numberToWrite;
        if (maxValue < numberToWrite) maxValue = numberToWrite;
    }
    
    fileWithRealNumbers.close();
    
    fileWithSum.open("fileWithSum.dat", ios::out);
    fileWithSum << minValue << " " << maxValue << " " << minValue + maxValue;
    fileWithSum.close();
}
