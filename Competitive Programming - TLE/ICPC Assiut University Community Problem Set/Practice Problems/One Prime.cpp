#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int factors = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            factors++;
        }
    }

    if(factors <= 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}