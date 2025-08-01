#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;

        cin >> n;

        int temp[n];

        for(int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }

        int smallSum = INT_MAX;

        for(int i = 1; i <= n; i++)
        {
            for(int j = i; j <= n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                else
                {
                    int temp_sum = temp[i-1] + temp[j-1] + j - i;

                    if(temp_sum < smallSum)
                    {
                        smallSum = temp_sum;
                    }
                }
            }
        }
        cout << smallSum << endl;
    }

    return 0;
}