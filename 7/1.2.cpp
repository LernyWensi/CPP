#include <iostream>

using namespace std;

struct Sportsman
{
    string secondName;
    string sport;
    string sportCommunity;
};

int main()
{
    string targetSport;
    
    int sportsmansSize;
    
    cout << "Enter number of sportsmans: "; cin >> sportsmansSize;

    Sportsman *sportsmans = new Sportsman[sportsmansSize];

    for (int i = 0; i < sportsmansSize; ++i)
    {
        cout << "\nSecond name: "; cin >> sportsmans[i].secondName;
        cout << "Sport: "; cin >> sportsmans[i].sport;
        cout << "Sport community: "; cin >> sportsmans[i].sportCommunity;
    }
    
    cout << "\nEnter target sport: ";
    cin >> targetSport;
    cout << endl;
    
    for (int i = 0; i < sportsmansSize; i++)
    {
        if (sportsmans[i].sport == targetSport)
        {
            cout << sportsmans[i].secondName << endl;
            cout << sportsmans[i].sport << endl;
            cout << sportsmans[i].sportCommunity << endl;
            cout << endl;
        }
    }
    
}
