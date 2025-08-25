#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;

    cin >> t;

    int mishkaCount = 0;
    int chrisCount = 0;

    while(t--)
    {
        int a,b;
        
        cin >> a >> b;
        
        if (a > b)
        {
            mishkaCount++;
        }
        else if (a < b)
        {
            chrisCount++;
        }
        // if a == b, do nothing
    }

    if(mishkaCount == chrisCount)
    {
        cout << "Friendship is magic!^^\n";   
    }
    else
    {
        cout << ((mishkaCount > chrisCount) ? "Mishka\n" : "Chris\n");
    }

    return 0;
}