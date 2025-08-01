#include<bits/stdc++.h>
using namespace std;

int main()
{
    int np;
    int nc;
    int si;

    cin >> np >> nc >> si;

    int result = si;

    for(int i = 1; i < nc; i++)
    {
        if(result > np) // 2 3 4 5 6 7 | 1 2 3 4 5 6 7 | 1 2 3 4 5 6
        {
            result = 1;
        }
        result++;
    }

    cout << result;

    return 0;
}