#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        
        cin >> n;
        
        int c1 = 0, c2 = 0;
        
        for (int i = 0; i < n; i++)
        {
            int x;

            cin >> x;
            
            if (x == 1)
            {
                c1++;
            } 
            else
            {
                c2++;
            }
        }

        int sum = c1 + 2 * c2;

        if (sum % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int half = sum / 2;

            if (half % 2 == 0 || (half % 2 == 1 && c1 > 0))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}