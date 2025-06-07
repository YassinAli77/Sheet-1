#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n1 = 0.0, n2 = 0.0;
    cout << "Enter two integers: ";
    cin >> n1 >> n2;
    cout << floor(n1 / n2) << endl;
    cout << ceil(n1 / n2) << endl;
    
    cout << round(n1 / n2) << endl;
}