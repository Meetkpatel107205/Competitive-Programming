#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    string str;

    cin >> str;

    int alpha_count[26] = {0};

    for(int i = 0; i < n; i++)
    {
        char ch = tolower(char(str[i]));

        if(ch >= 'a' && ch <= 'z')
        {
            alpha_count[ch - 'a']++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        if(!alpha_count[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}