#include<iostream>
using namespace std;
int main()
{
    int age = 0 , age_in_years , age_in_months , age_in_weeks , age_in_days , age_in_hours , age_in_minutes , age_in_seconds; 
    cout << " Enter your age : ";
    cin >> age;

    age_in_years = age;
    age_in_months = age * 12;
    age_in_weeks = age * 12 * 4;
    age_in_days = age * 365;
    age_in_hours = age * 365 * 24;
    age_in_minutes = age * 365 * 24 * 60;
    age_in_seconds = age * 365 * 24 * 60 * 60;

    cout << "Your age in years: " << age_in_years << endl;
    cout << "Your age in months: " << age_in_months << endl;
    cout << "Your age in weeks: " << age_in_weeks << endl;
    cout << "Your age in days: " << age_in_days << endl;
    cout << "Your age in hours: " << age_in_hours << endl;
    cout << "Your age in minutes: " << age_in_minutes << endl;
    cout << "Your age in seconds: " << age_in_seconds << endl;
    return 0;
    

}