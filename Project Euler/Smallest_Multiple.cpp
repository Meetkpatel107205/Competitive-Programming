#include<bits/stdc++.h>
using namespace std;

long long lcm(int a, int b)
{
    int maxNum = (a > b) ? a : b;

    while(true)
    {
        if(maxNum % a == 0 && maxNum % b == 0)
        {
            return maxNum;
        }
        maxNum++;
    }
}

int main()
{
    int n;

    cin >> n;

    long long result = 1;

    for(int i = 1; i <= n; i++)
    {
        result = lcm(result, i);
    }

    cout << result;

    return 0;
}