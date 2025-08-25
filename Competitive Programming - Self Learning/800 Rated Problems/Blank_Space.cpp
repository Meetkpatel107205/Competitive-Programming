#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

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

                while(j < n && a[j] != 1)
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

// Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int blankSpace = 0;   // longest run of zeros
//         int current = 0;      // current run length

//         for (int i = 0; i < n; i++) {
//             if (a[i] == 0) {
//                 current++;
//                 blankSpace = max(blankSpace, current);
//             } else {
//                 current = 0;  // reset streak
//             }
//         }

//         cout << blankSpace << "\n";
//     }
//     return 0;
// }