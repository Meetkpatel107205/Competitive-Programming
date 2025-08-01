#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    int s1Length = 0,s2Length = 0;

    for(int i = 0; i < s1.length(); i++)
    {
        s1Length++;
    }

    for(int i = 0; i < s2.length(); i++)
    {
        s2Length++;
    }

    cout << s1Length << " " << s2Length << endl;

    cout << s1 << " " << s2;

    return 0;
}