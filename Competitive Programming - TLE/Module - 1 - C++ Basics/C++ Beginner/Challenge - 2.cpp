#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,y,z;

    cout << "Enter Number - 1 : ";
    cin >> x;

    cout << endl;

    cout << "Enter Number - 2 : ";
    cin >> y;

    cout << endl;

    cout << "Enter Number - 3 : ";
    cin >> z;

    cout << endl;

    if(x > y)
    {
        if(x > z)
        {
            cout << "Greatest Number is " << x;
        }
        else
        {
            cout << "Greatest Number is " << z;
        }
    }
    else
    {
        if(y > z)
        {
            cout << "Greatest Number is " << y;
        }
        else
        {
            cout << "Greatest Number is " << z;
        }
    }

    return 0;
}