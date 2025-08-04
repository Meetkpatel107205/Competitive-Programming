#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    int str_len = max(s1.size(), s2.size());

    bool isTranslated = true;

    for(int i = 0; i < str_len; i++)
    {
        if(s1[i] != s2[str_len - i - 1])
        {
            isTranslated = false;
        }
    }

    if(isTranslated)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}