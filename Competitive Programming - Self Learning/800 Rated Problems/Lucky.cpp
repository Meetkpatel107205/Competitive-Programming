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

        int firstThreeSum = 0;
        int lastThreeSum = 0;

        for(int i = 0; i < 3; i++)
        {
            firstThreeSum += (str[i] - '0');
        }

        for(int i = (str.size() - 1); i >= 3; i--)
        {
            lastThreeSum += (str[i] - '0');
        }

        if(firstThreeSum == lastThreeSum)
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