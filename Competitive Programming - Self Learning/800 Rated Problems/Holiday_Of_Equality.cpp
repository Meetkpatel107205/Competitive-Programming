#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    int maxEle = INT_MIN;

    int welfareSum = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > maxEle)
        {
            maxEle = a[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        welfareSum += (maxEle - a[i]); 
    }

    cout << welfareSum;

    return 0;
}