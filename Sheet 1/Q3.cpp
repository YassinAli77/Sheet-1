#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char arth;
    cin >> n1 >> arth >> n2;

    switch (arth)
    {
    case '+':
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
        break;
    }
    return 0;
}