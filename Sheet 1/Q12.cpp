#include <iostream>
#include <string>

using namespace std;

void person_1(string Name_1, string Name_2)
{
    cout << "His name is  : " << Name_1 << " " << Name_2 << endl;
}

void person_2(string Name_1, string Name_2)
{
    cout << "His name is  : " << Name_1 << " " << Name_2 << endl;
}

int main()
{
    string name_1, name_2, name_3, name_4;
    cout << "\n Enter the first name for person_1: ";
    cin >> name_1;
    cout << "\n Enter the second name for person_1: ";
    cin >> name_2;
    cout << "\n Enter the first name for person_2 : ";
    cin >> name_3;
    cout << "\n Enter the second name for person_2 : ";
    cin >> name_4;

    cout << "\n";

    person_1(name_1, name_2);
    person_2(name_3, name_4);

    if (name_2 == name_4)
    {
        cout << " they are brothers " << endl;
    }
    else
    {
        cout << " they are not brothers " << endl;
    }
}