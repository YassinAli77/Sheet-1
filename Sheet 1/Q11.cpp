#include<iostream>
using namespace std;
int main()
{
    int n1,  n2 , n3;
    cout << "Enter three integers: \n";
    cin >> n1 >> n2 >> n3;

    if(n1>n2 && n1>n3 && n2>n3)
    {
        cout << "the largest number is: " << n1 << endl;
        cout << "the smallest number is: " << n3 << endl;
    }

    else if(n1>n2 && n1>n3 && n3>n2)
    {
        cout << "the largest number is: " << n1 << endl;
        cout << "the smallest number is: " << n2 << endl;
    }

    else if(n2>n1 && n2>n3 && n1>n3)
    {
        cout << "the largest number is: " << n2 << endl;
        cout << "the smallest number is: " << n3 << endl;
    }

    else if(n2>n1 && n2>n3 && n3>n1)
    {
        cout << "the largest number is: " << n2 << endl;
        cout << "the smallest number is: " << n1 << endl;
    }

    else if(n3>n2 && n3>n1 && n1>n2)
    {
        cout << "the largest number is: " << n3 << endl;
        cout << "the smallest number is: " << n2 << endl;
    }

    else if(n3>n2 && n3>n1 && n2>n1)
    {
        cout << "the largest number is: " << n3 << endl;
        cout << "the smallest number is: " << n1 << endl;
    }

    return 0;
}