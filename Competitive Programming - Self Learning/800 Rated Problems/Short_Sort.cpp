// #include <bits/stdc++.h>
// using namespace std;

// // Method - 1 :-

// int main() {
//     int t; cin >> t;
//     while (t--) {
//         string s; cin >> s;
//         string target = "abc";
//         int wrong = 0;
//         for (int i = 0; i < 3; i++) {
//             if (s[i] != target[i]) wrong++;
//         }
//         cout << (wrong <= 2 ? "YES" : "NO") << "\n";
//     }
// }

// Method - 2 :-

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        string str;

        cin >> str;

        if(str != "bca" && str != "cab")
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

// // Method - 3 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while (t--) {
//         string s; cin >> s;
//         bool ok = false;
//         string target = "abc";

//         for (int i = 0; i < 3; i++) {
//             for (int j = i; j < 3; j++) {
//                 string temp = s;
//                 swap(temp[i], temp[j]);
//                 if (temp == target) ok = true;
//             }
//         }

//         cout << (ok ? "YES" : "NO") << "\n";
//     }
// }