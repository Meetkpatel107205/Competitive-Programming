// #include <bits/stdc++.h>
// using namespace std;

// // Method - 1 :-

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t; 
//     cin >> t;
//     while (t--) {
//         int n;
//         string s;
//         cin >> n >> s;

//         // All zeros
//         if (s.find('1') == string::npos) {
//             cout << 0 << "\n";
//             continue;
//         }
//         // All ones
//         if (s.find('0') == string::npos) {
//             cout << 1 << "\n";
//             continue;
//         }

//         int boundaries = 0;
//         for (int i = 0; i + 1 < n; ++i) {
//             if (s[i] != s[i + 1]) boundaries++;
//         }

//         int ans = boundaries + (s[0] == '1' ? 1 : 0);
//         cout << ans << "\n";
//     }
//     return 0;
// }

// Method - 2 :-

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    int cnt = 0;
    char prev = '0';   // start with '0' before the string begins
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != prev)   // whenever we see a new segment
        {
            cnt++;
        }
        prev = s[i];        // update previous char
    }

    cout << cnt << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

