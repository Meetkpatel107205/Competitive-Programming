#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;


    for(int i = 2; i <= n; i++)
    {
        int temp_count = 0;
        for(int j = 1; j <= n; j++)
        {
            if(i % j == 0)
            {
                temp_count++;
            }
        }

        if(temp_count <= 2)
        {
            cout << i << " ";
        }
        else
        {
            temp_count = 0;
        }
    }

    return 0;
}