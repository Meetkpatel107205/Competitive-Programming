#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int count = 0;

    while(n--)
    {
        int pl,pc;

        cin >> pl >> pc;

        if(pl <= (pc - 2))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}