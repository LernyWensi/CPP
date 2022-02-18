#include <iostream>
#include <string>

using namespace std;

struct Restaurant
{
    string name;
    string chefSecondName;
    string mainMenu;
    int numberOfTables;
};

void printStrcut(Restaurant list[], int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        cout << "Restaurant #" << i + 1 << endl;
        cout << "1) Name: " << list[i].name << endl;
        cout << "2) Chef second name: " << list[i].chefSecondName << endl;
        cout << "3) Main menu: " << list[i].mainMenu << endl;
        cout << "4) Number of tables: " << list[i].numberOfTables << endl;
        cout << endl;
    }
}

void sortStruct(Restaurant list[], int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        for (int j = i; j < structSize; j++)
        {
            if (list[i].numberOfTables > list[j].numberOfTables)
            {
                Restaurant tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        }
    }
}

void editStruct(Restaurant list[], int structSize, int restaurantToEdit, int valueToEdit, string newValue)
{
    switch(valueToEdit)
    {
        case (1):
            list[restaurantToEdit - 1].name = newValue;
            break;
        case (2):
            list[restaurantToEdit - 1].chefSecondName = newValue;
            break;
        case (3):
            list[restaurantToEdit - 1].mainMenu = newValue;
            break;
        case (4):
            list[restaurantToEdit - 1].numberOfTables = stoi(newValue);
            break;
        default:
            break;
    }
}

int main()
{
    Restaurant listOfRestaurant[] = {
        {"Name1", "Chef1", "mainMenu1", 100},
        {"Name2", "Chef2", "mainMenu2", 30},
        {"Name3", "Chef3", "mainMenu3", 50}
    };
    int structSize = sizeof(listOfRestaurant) / sizeof(listOfRestaurant[0]);
    
    printStrcut(listOfRestaurant, structSize);
    cout << "------After sort------" << endl << endl;
    sortStruct(listOfRestaurant, structSize);
    printStrcut(listOfRestaurant, structSize);
    cout << "----------------------" << endl << endl;
    
    int restaurantToEdit;
    int valueToEdit;
    string newValue;
     
    cout << "Enter number of restaurant to edit: ";
    cin >> restaurantToEdit;
    cout << "Enter number of field to edit: ";
    cin >> valueToEdit;
    cin.ignore();
    cout << "Enter new value: ";
    getline(cin, newValue);
    
    editStruct(listOfRestaurant, structSize, restaurantToEdit, valueToEdit, newValue);
    
    cout << "\n\n------After edit------" << endl << endl;
    sortStruct(listOfRestaurant, structSize);
    printStrcut(listOfRestaurant, structSize);
}
