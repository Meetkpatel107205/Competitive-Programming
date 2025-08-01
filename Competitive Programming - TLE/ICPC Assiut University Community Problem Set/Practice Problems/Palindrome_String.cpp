#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;

    cin >> a;

    int a_len = a.size();

    int left = 0;
    int right = a_len - 1;

    bool isPalinedrome = true;

    for(int i = 0; i < (a_len/2); i++)
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