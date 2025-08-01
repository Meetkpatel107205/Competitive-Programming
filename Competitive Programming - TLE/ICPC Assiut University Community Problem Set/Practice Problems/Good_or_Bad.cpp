#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        string temp;

        cin >> temp;

        bool isGood = false;

        for(int j = 0; j <= temp.size() - 3; j++)
        {
            if(temp[j] == '0')
            {
                if(temp[j + 1] == '1' && temp[j + 2] == '0')
                {
                    isGood = true;
                    break;
                }
            }
            else if(temp[j] == '1')
            {
                if(temp[j + 1] == '0' && temp[j + 2] == '1')
                {
                    isGood = true;
                    break;
                }
            }
        }

        if(isGood)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}