#include<bits/stdc++.h>
using namespace std;

// Method - 1 :-

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a,b,c;

        cin >> a >> b >> c;

        if(a != b && a != c)
        {
            cout << a << endl;
        }

        if(b != a && b != c)
        {
            cout << b << endl;
        }

        if(c != b && c != a)
        {
            cout << c << endl;
        }
    }

    return 0;
}

// Method - 2 :-

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        cout << (a ^ b ^ c) << "\n";   // x^x=0, 0^y=y -> leaves the unique one
    }
}

// Method - 3 :-

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        int ans = (a==b) ? c : (a==c ? b : a);
        cout << ans << "\n";
    }
}

