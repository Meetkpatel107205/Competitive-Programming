#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string str;

        cin >> str;

        int str_len = str.size();

        int pow = 1;

        int count = 0;

        for(int i = 0; i < str_len; i++)
        {
            if(str[i] != '0')
            {
                count++;
            }
        }

        cout << count << endl;

        for(int i = str_len - 1; i >= 0; i--)
        {
            int val = (str[i] - '0') * pow;

            if(val != 0)
            {
                cout << val << " ";
            }

            pow *= 10;
        }

        cout << endl;
    }

    return 0;
}