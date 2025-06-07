#include<iostream>
using namespace std;
int main()
{
    int n1 , n2 , n3 , n4 , result , Last_two_digits;
    cout << " Enter four numbers \n";
    cin >> n1 >> n2 >> n3 >> n4;
    
    result = n1 * n2 * n3 * n4;
    Last_two_digits = result % 100;
    cout << " The last two digits of the product are: " << Last_two_digits << endl;
    return 0;
}