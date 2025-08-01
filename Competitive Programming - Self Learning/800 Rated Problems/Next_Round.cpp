#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    int a[n];

    int kthScore = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(i == (k - 1))
        {
            kthScore = a[i];
        }
    }

    int result = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= kthScore && a[i] > 0)
        {
            result++;
        }
    }

    cout << result;
    
    return 0;
}