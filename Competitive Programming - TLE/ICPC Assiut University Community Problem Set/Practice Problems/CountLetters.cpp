#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin >> s;

    int count[26] = {0};

    for(int i = 0; i < s.size(); i++)
    {
        count[int(s[i]) - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(count[i] > 0)
        {
            cout << char(i + 97) << " : " << count[i] << endl;
        }
    }

    return 0;
}