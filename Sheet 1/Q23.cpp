#include<iostream>
using namespace std;
int main()
{
    int n1 , n2 , result;
    cout << " Enter two numbers : \n";
    cin >> n1 >> n2;

    cout << "Enter the Result "<<endl;
    cin >> result;

    if(n1 + n2 == result)
    {
        cout << n1 << " + "<< n2 << " = " << result << endl;
        cout << "Yes"<<endl;
    }
    else
    {
        cout << n1 << " + "<< n2 << " = " << result << endl; 
        cout << "No"<<endl;
    }
    
    return 0;

}