#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string temp;

        cin >> temp;

        if(temp == "YES" || temp == "Yes" || temp == "yEs" || temp == "yeS" || temp == "YeS" || temp == "YEs" || temp == "yES" || temp == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}