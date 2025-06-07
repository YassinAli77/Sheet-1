#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter a character : ";
    cin >> x;


    if (x >= 97 && x <= 122)
    {
        x -= 32;
        cout << x << endl;
    }

    else
    {
        x += 32;
        cout << x << endl;
    }

    return 0;
}