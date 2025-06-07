#include<iostream>
using namespace std;

void Calc (int a , int b , char ar)
{
    switch (ar)
    {
        case '+':
            cout << a << " + " << b << " = " << a + b << endl;
            break;

         case '-':
            cout << a << " - " << b << " = " << a - b << endl;
            break;

         case '*':
            cout << a << " * " << b << " = " << a * b << endl;
            break;

         case '/':
            if(b==0)
            {
                cout << " undefined quantity " << endl;
            }

            else
            {
                cout << a << " + " << b << " = " << a + b << endl;
            }
            break;
    }
}
int main()
{
    int a , b ;
    char ar;
    cout << " Enter the first number : ";
    cin >> a;
    cout << " Enter the second number : ";
    cin >> b;
    cout << " Enter the operator : ";
    cin >> ar;
    Calc(a, b, ar);
    return 0;

}