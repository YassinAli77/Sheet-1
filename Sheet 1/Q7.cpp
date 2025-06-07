#include<iostream>
using namespace std;
int main()
{
    int sum = 0 , N = 1;
    cout<<"Enter the number you want to sum untill it: ";
    cin >> N;

    for (int i = 1; i <=N ; i++)
    {
        sum += i;
    }

    cout << sum <<endl;
    return 0;
}