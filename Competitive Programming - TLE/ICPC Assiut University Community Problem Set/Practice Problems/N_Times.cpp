#include<bits/stdc++.h>
using namespace std;

void NTimes(int n, char c)
{
    for(int j = 0; j < n; j++)
    {
        cout << c << " ";
    }
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int temp;
        char ch;

        cin >> temp >> ch;

        NTimes(temp, ch);

        cout << endl;
    }

    return 0;
}