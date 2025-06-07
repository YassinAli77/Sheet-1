#include<iostream>
using namespace std;
int main()
{
    int n1 = 0 , n2 = 0;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    if(n1>n2)
    {
        cout << "yes" <<endl;
    }
    else
    {
        cout << "no" <<endl;
    }

    return 0;
}