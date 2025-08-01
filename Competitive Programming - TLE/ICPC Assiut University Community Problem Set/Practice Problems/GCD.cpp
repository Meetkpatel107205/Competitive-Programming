#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;

    cin >> a >> b;

    int temp_max = max(a,b);

    int max_divisor = 1;

    for(int i = 1; i <= temp_max; i++)
    {
        if((a % i == 0) && (b % i == 0))
        {
            if(i > max_divisor)
            {
                max_divisor = i;
            }
        }
    }

    cout << max_divisor;

    return 0;
}