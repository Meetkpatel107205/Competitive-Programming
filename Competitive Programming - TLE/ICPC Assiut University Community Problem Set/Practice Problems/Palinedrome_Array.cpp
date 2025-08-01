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

    int left = 0;
    int right = (n - 1);

    bool isPalinedrome = true;

    for(int i = 0; i <= (n/2); i++)
    {
        if(a[left] != a[right])
        {
            isPalinedrome = false;
            break;
        }
        else
        {
            left++;
            right--;
        }
    }

    if(isPalinedrome)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}