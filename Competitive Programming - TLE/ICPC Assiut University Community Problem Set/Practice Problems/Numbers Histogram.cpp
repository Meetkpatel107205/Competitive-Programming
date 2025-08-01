#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int n;

    cin>> ch >> n;

    int temp[n];

    for(int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < temp[i]; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}