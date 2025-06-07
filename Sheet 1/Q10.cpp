#include<iostream>
using namespace std;
int main()
{
    int A , B;
    cout << "Enter two integers: \n";
    cin >> A >> B;
    if (A == B*B)
    {
        cout << "Multiplies" <<endl;
    }
    else
    {
        cout << "Not multiplies" <<endl;
    }

    return 0;
}