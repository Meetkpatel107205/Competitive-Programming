#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int t;

    cin >> t;

    int searchResult = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == t)
        {
            searchResult = i;
            break;
        }
    }

    cout << searchResult;

    return 0;
}