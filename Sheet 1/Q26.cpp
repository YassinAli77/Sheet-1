#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n1 , n2 , n3 , n4;
    cout << " Enter four numbers \n";
    cin >> n1 >> n2 >> n3 >> n4;

    if (pow(n1 , n2)> pow(n3 , n4))
    {
        cout << "yes" << endl;
    }
    else 
    {
        cout << "NO " << endl;
    }
    
    return 0;
}