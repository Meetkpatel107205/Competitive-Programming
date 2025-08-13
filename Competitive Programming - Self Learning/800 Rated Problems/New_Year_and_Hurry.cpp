#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;

    int countSolvedTime = 0;

    int countSolvedProblems = 0;

    for(int i = 1; i <= n; i++)
    {
        countSolvedTime += (i*5);

        if((countSolvedTime + k) <= 240)
        {
            countSolvedProblems++;
        }
        else
        {
            break;
        }
    }

    cout << countSolvedProblems;

    return 0;
}