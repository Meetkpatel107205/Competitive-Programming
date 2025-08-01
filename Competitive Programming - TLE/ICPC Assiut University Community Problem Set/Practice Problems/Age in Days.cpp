#include<bits/stdc++.h>
using namespace std;

int main()
{

    int age;

    cin >> age;

    int years = age / 365;
    int days1 = age % 365;

    int days2 = 0;
    int months = 0;

    if(days1 >= 30)
    {
        days2 = days1 % 30;
        months = days1 / 30;
    }
    else
    {
        days2 = days1;
    }

    cout << years << " years" << endl << months << " months" << endl << days2 << " days" << endl;

    return 0;
}