#include<iostream>
using namespace std;
int main()
{
    int x , y;
    int sum_1 , sum_2;

    cout<<"Enter 1st integer: ";
    cin >> x;

    cout<<"Enter 2nd integer: ";
    cin >> y;

    sum_1 = x % 10;
    sum_2 = y % 10;

    cout<< "The sum of the last digits is: " << sum_1 + sum_2 << endl;
    return 0;
}