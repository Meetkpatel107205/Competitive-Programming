#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    int n[t],temp[t];

    int result = 1;

    for(int i = 0; i < t; i++)
    {
        cin >> n[i];

        string k[n[i]];

        cin >> temp[i];

        for(int j = 0; j < n[i]; j++)
        {
            cin >> k[j];

            if(j > 0)
            {
                if(k[j] == k[0])
                {
                    result++;
                }
            }
        }

        cout << result << endl;

        result = 1;

    }

    return 0;
}