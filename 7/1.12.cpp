#include <iostream>

using namespace std;

struct Patient
{
    string secondName;
    string passportID;
    string disease;
    string doctorSecondName;
};

int main()
{
    string doctorSecondName;

    Patient patients[] = {
        {"secondName", "disease", "passortID", "Smith"},
        {"secondName", "disease", "passortID", "Smith"},
        {"secondName", "disease", "passortID", "Williams"}
    };
    int patientsSize = sizeof(patients) / sizeof(patients[0]);
    
    cout << "Enter doctor's second name: ";
    cin >> doctorSecondName;
    cout << endl;
    
    for (int i = 0; i < patientsSize; i++)
    {
        if (patients[i].doctorSecondName == doctorSecondName)
        {
            cout << patients[i].secondName << endl;
            cout << patients[i].disease << endl;
            cout << patients[i].passportID << endl;
            cout << patients[i].doctorSecondName << endl;
            cout << endl;
        }
    }
    
}
