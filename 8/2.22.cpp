#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));
    
    fstream fileWithRealNumbers;
    fstream fileWithMaxValue;
    int amountOfNumbers = 10;
    int randomStart = -25;
    int randomEnd = 50;
    int maxValues[] = {-9999, 0};
    
    fileWithRealNumbers.open("fileWithRealNumbers.dat", ios::out);
    
    for (int i = 0; i < amountOfNumbers; i++)
    {
        int numberToWrite = rand() % randomEnd + randomStart;
        
        fileWithRealNumbers << numberToWrite << " ";
        
        if (maxValues[0] < abs(numberToWrite) && (i + 1) % 2 != 0)
        {
            maxValues[0] = abs(numberToWrite);
            maxValues[1] = numberToWrite;
        };
    }
    
    fileWithRealNumbers.close();
    
    fileWithMaxValue.open("fileWithMaxValue.dat", ios::out);
    fileWithMaxValue << maxValues[1];
    fileWithMaxValue.close();
}
