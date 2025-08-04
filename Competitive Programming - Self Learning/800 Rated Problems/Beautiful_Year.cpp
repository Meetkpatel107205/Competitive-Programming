#include<bits/stdc++.h>
using namespace std;

bool hasAllDistinctDigits(int num)
{
    int mask = 0;

    while(num > 0)
    {
        int last = num % 10;

        int bit = 1 << last;

        if(mask & bit)
        {
            return false;
        }

        mask |= bit;

        num /= 10;
    }

    return true;
}

int main()
{
    int y;

    cin >> y;

    bool isDistinctYear = false;

    int i = 1;

    while(!isDistinctYear)
    {
        bool result = hasAllDistinctDigits(y+i);

        if(result)
        {
            cout << (y + i);
            isDistinctYear = true;
        }

        i++;
    }

    return 0;
}