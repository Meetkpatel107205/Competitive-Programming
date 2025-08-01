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

        int temp_len = temp.size();

        if(temp_len > 10)
        {
            cout << temp[0] << (temp_len - 2) << temp[temp_len - 1] << endl;
        }
        else
        {
            cout << temp << endl;
        }
    }

    return 0;
}