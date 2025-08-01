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

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            cout << count;
            return 0;
        }
    }

    bool isLoop = true;
    int idx = 0;

    while(isLoop)
    {
        if(a[idx] % 2 == 0 && idx != n)
        {
            a[idx] = a[idx] / 2;
            idx++;
        }
        else if(idx == n)
        {
            idx = 0;
            count++;
        }
        else
        {
            isLoop = false;
            break;
        }
    }

    cout << count;

    return 0;
}