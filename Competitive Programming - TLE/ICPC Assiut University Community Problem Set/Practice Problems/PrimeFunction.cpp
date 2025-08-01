#include<bits/stdc++.h>
using namespace std;

string Prime(int a)
{
    if(a < 2)
    {
        return "NO";
    }

    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            return "NO";
        }
    }

    return "YES";
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int temp;

        cin >> temp;

        cout << Prime(temp) << endl;
    }

    return 0;
}