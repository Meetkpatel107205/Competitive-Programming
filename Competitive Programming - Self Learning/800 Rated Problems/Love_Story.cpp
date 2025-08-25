#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    string codeforces = "codeforces";

    while(t--)
    {
        string str;

        cin >> str;

        int wrongIndices = 0;

        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] != codeforces[i])
            {
                wrongIndices++;
            }
        }

        cout << wrongIndices << "\n";
    }

    return 0;
}