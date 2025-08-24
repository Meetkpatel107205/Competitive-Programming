#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        string str;

        cin >> str;

        for(int i = 0; i <= str.size() - 2; i++)
        {
            cout << str[i];
        }

        cout << "i\n";
    }

    return 0;
}