#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int frequency[m+1] = {0};

    for(int i = 0; i < n; i++)
    {
        frequency[a[i]]++;
    }

    for(int i = 1; i <= m; i++)
    {
        cout << frequency[i] << endl;
    }

    return 0;
}