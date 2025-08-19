#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

int main()
{
    int t;

    cin >> t;

    string codeforcesCheck = "codeforces";

    while(t--)
    {
        char ch;

        cin >> ch;

        bool found = false;

        for(int i = 0; i < codeforcesCheck.size(); i++)
        {
            if(ch == codeforcesCheck[i])
            {
                found = true;
            }
        }

        if(found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// Method - 2 :-

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "codeforces";

//     int t;

//     cin >> t;

//     while(t--)
//     {
//         char ch;

//         cin >> ch;

//         if (str.find(ch) != string::npos)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
