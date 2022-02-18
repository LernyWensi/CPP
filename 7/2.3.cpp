#include <iostream>

using namespace std;

struct Conferee
{
    string secondName;
    string whereFrom;
    string phoneNumber;
};

void printStrcut(Conferee list[], int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        cout << "Second name: " << list[i].secondName << endl;
        cout << "Where from: " << list[i].whereFrom << endl;
        cout << "Phone number: " << list[i].phoneNumber << endl;
        cout << endl;
    }
}

void sortStruct(Conferee list[], int structSize)
{
    for (int i = 0; i < structSize - 1; i++)
    {
        if (list[i].secondName[0] > list[i + 1].secondName[0])
        {
            Conferee tmp = list[i];
            list[i] = list[i + 1];
            list[i + 1] = tmp;
        }
    }
}

void searchInStruct(Conferee list[], int structSize, string searchValue)
{
    for (int i = 0; i < structSize; i++)
    {
        if (searchValue == list[i].secondName || searchValue == list[i].whereFrom || searchValue == list[i].phoneNumber)
        {
            cout << "Search value: " << searchValue << endl;
            cout << "Result: " << endl;
            cout << "   Second name: " << list[i].secondName << endl;
            cout << "   Where from: " << list[i].whereFrom << endl;
            cout << "   Phone number: " << list[i].phoneNumber << endl;
            cout << "--------" << endl;
        }
    }
}

int main()
{
    Conferee listOfConferee[] = {
        {"Smith", "USA", "+1 234 567-89-00"},
        {"Johnson", "USA", "+1 234 567-89-00"},
        {"Williams", "USA", "+1 234 567-89-00"}
    };
    int structSize = sizeof(listOfConferee) / sizeof(listOfConferee[0]);
    
    printStrcut(listOfConferee, structSize);
    cout << "------After sort------" << endl << endl;
    sortStruct(listOfConferee, structSize);
    printStrcut(listOfConferee, structSize);
    cout << "----------------------" << endl << endl;
    
    string searchValue;
    
    cout << "Enter value to search: ";
    cin >> searchValue;
    cout << endl;
    
    searchInStruct(listOfConferee, structSize, searchValue);
}
