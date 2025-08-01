#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int countNeg = 0;
    int countPos = 0;
    int countEven = 0;
    int countOdd = 0;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            countNeg++;
        }

        if(a[i] > 0)
        {
            countPos++;
        }

        if(a[i] % 2 == 0)
        {
            countEven++;
        }

        if(a[i] % 2 != 0)
        {
            countOdd++;
        }
    }

    cout << "Even: " << countEven << endl;
    cout << "Odd: " << countOdd << endl;
    cout << "Positive: " << countPos << endl;
    cout << "Negative: " << countNeg;

    return 0;
}