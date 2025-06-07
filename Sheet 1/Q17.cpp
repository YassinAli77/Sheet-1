#include<iostream>
using namespace std;
int main()
{
    float n1  , n2;
    cout << "Enter two numbers: \n ";
    cin >> n1 >> n2;

    if ( n1 > 0 && n2 > 0 )
    {
        cout << " Quadrant 1 " << endl;
    }
    else if ( n1 < 0 && n2 > 0 )
    {
        cout << " Quadrant 2 " << endl;
    }
    else if ( n1 < 0 && n2 < 0 )
    {
        cout << " Quadrant 3 " << endl;
    }
    else if ( n1 > 0 && n2 < 0 )
    {
        cout << " Quadrant 4 " << endl;
    }
    else
    {
        cout << " The point is on the axis neither X nor Y " << endl;
    }
}