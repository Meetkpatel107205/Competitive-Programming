#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int blankSpace = 0;

        int i = 0;

        while(i < n)
        {
            if(a[i] == 0)
            {
                int j = i;

                int consecutiveZero = 0;

                while(a[j] != 1 && j < n)
                {
                    consecutiveZero++;
                    j++;
                }

                if(consecutiveZero > blankSpace)
                {
                    blankSpace = consecutiveZero;
                }

                i = (j + 1);
            }
            else
            {
                i++;
            }
        }

        cout << blankSpace << "\n";
    }

    return 0;
}