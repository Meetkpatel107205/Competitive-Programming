#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int evenCount = 0;

    for(int i = 1; i <= n; i++)
    {   
        if(i % 2 == 0)
        {
            evenCount++;
            cout << i << endl;
        }
    }

    if(evenCount == 0)
    {
        cout << (-1);
    }
}