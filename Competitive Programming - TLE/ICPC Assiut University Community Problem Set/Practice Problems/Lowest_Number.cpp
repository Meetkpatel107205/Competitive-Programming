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

    int minEle = INT_MAX;
    int minIdx = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < minEle)
        {
            minEle = a[i];
            minIdx = (i + 1);
        }
    }

    cout << minEle << " " << minIdx;

    return 0;
}