#include<bits/stdc++.h>
using namespace std;

int main()
{

    int age;

    cout << "Enter Your Age : "; 
    cin >> age;

    cout << endl;

    // Method - 1 :-

    if(age >= 0 && age <= 17)
    {
        cout << "Child" << endl;
    }
    else if(age >= 18 && age <= 64)
    {
        cout << "Adult" << endl;
    }
    else
    {
        cout << "Senior Citizen" << endl;
    }

    // Method - 2 :-

    // if(age >= 0 && age <= 17)
    // {
    //     cout << "Child" << endl;
    // }
    // else if(age > 17 && age <= 64)
    // {
    //     cout << "Adult" << endl;
    // }
    // else
    // {
    //     cout << "Senior Citizen" << endl;
    // }

    // Method - 3 :-

    // age is always greater than equal to 0
    // if(age <= 17) // If someone given negative value then this method fails.
    // {
    //     cout << "Child" << endl;
    // }
    // else if(age <= 64)
    // {
    //     cout << "Adult" << endl;
    // }
    // else
    // {
    //     cout << "Senior Citizen" << endl;
    // }

    return 0;
}