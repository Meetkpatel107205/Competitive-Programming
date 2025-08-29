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

        string str;

        cin >> str;

        int alphabets[26] = {0};

        int balloonsCount = 0;

        for(int i = 0; i < n; i++)
        {
            if(alphabets[str[i] - 'A'] == 0)
            {
                balloonsCount += 2;
                alphabets[str[i] - 'A'] = 1;
            }
            else
            {
                balloonsCount++;
            }
        }

        cout << balloonsCount << "\n";
    }

    return 0;
}

// // Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         unordered_set<char> solved;
//         int balloonsCount = 0;

//         for(char c : s) {
//             if(solved.find(c) == solved.end()) {
//                 balloonsCount += 2; // first solve
//                 solved.insert(c);
//             } else {
//                 balloonsCount++; // not first solve
//             }
//         }

//         cout << balloonsCount << "\n";
//     }
// }

// // Method - 3 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         map<char, int> mp;
//         int balloonsCount = 0;

//         for(char c : s) {
//             if(mp[c] == 0) {
//                 balloonsCount += 2;
//             } else {
//                 balloonsCount++;
//             }
//             mp[c]++;
//         }

//         cout << balloonsCount << "\n";
//     }
// }

// // Method - 4 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         int n; cin >> n;
//         string s; cin >> s;

//         int mask = 0;
//         int balloonsCount = 0;

//         for(char c : s) {
//             int bit = 1 << (c - 'A');
//             if((mask & bit) == 0) { // first solve
//                 balloonsCount += 2;
//                 mask |= bit;
//             } else { // already solved
//                 balloonsCount++;
//             }
//         }

//         cout << balloonsCount << "\n";
//     }
// }