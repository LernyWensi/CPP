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

    Sportsman sportsmans[] = {
        {"secondName", "tennis", "sportCommunity"},
        {"secondName", "tennis", "sportCommunity"},
        {"secondName", "tennis", "sportCommunity"}
    };
    int sportsmansSize = sizeof(sportsmans) / sizeof(sportsmans[0]);
    
    cout << "Enter target sport: ";
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
