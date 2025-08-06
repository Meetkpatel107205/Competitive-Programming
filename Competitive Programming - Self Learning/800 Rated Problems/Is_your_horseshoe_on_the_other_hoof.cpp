#include <bits/stdc++.h>
using namespace std;

// Method - 1 :-

int main() {
    set<int> colors; // to store unique colors
    int color;

    for (int i = 0; i < 4; i++) {
        cin >> color;
        colors.insert(color); // insert will automatically ignore duplicates
    }

    cout << 4 - colors.size() << endl; // the difference is what we need to buy
    return 0;
}

// Method - 2 :-

// #include <iostream>
// using namespace std;

// int main() {
//     int s[4];
//     for (int i = 0; i < 4; i++) {
//         cin >> s[i];
//     }

//     int unique = 0;

//     // manually count unique elements
//     for (int i = 0; i < 4; i++) {
//         bool found = false;
//         for (int j = 0; j < i; j++) {
//             if (s[i] == s[j]) {
//                 found = true;
//                 break;
//             }
//         }
//         if (!found) {
//             unique++;
//         }
//     }

//     cout << (4 - unique) << endl;

//     return 0;
// }


