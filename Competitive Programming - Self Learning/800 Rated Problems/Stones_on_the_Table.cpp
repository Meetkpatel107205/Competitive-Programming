#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++)
    {
        char temp;

        cin >> temp;

        if(temp == 'R')
        {
            a[i] = 0;
        }
        else if(temp == 'G')
        {
            a[i] = 1;
        }
        else
        {
            a[i] = 2;
        }
    }

    int count = 0;

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i+1])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}

// Method - 2 :-

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     string s;

//     cin >> n >> s;

//     int count = 0;

//     for (int i = 0; i < n - 1; i++) {
//         if (s[i] == s[i + 1]) {
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }
