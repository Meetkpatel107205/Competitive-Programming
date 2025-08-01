#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string temp;

    cin >> temp;

    int str_len = temp.size();

    int alpha[100] = {0};

    for(int i = 0; i < str_len; i++)
    {
        if(int(temp[i]) >= 65 && int(temp[i]) <= 90)
        {
            alpha[temp[i] - 'A']++;
        }
        else if(int(temp[i]) >= 90 && int(temp[i]) <= 122)
        {
            alpha[temp[i] - 'a']++;
        }
    }

    int count = 0;

    for(int i = 0; i < 100; i++)
    {
        if(alpha[i] > 0)
        {
            count++;
        }
    }

    if(count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}