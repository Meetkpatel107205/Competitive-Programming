#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int luckyCount = 0;

    for (int i = a; i <= b; i++)
    {
        string temp = to_string(i);
        bool isLuckyNumber = true;

        for (int j = 0; j < temp.length(); j++)
        {
            if (temp[j] != '4' && temp[j] != '7')
            {
                isLuckyNumber = false;
                break;
            }
        }

        if (isLuckyNumber)
        {
            cout << i << " ";
            luckyCount++;
        }
    }

    if(luckyCount == 0)
    {
        cout << (-1);
    }

    return 0;
}
