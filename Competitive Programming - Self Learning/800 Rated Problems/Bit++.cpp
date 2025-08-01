#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int x = 0;

    for(int i = 0; i < n; i++)
    {
        string temp;

        cin >> temp;

        if(temp == "++X" || temp == "X++")
        {
            x = ++x;
        }
        else if(temp == "X--" || temp == "--X")
        {
            x = --x;
        }
    }

    cout << x;

    return 0;
}