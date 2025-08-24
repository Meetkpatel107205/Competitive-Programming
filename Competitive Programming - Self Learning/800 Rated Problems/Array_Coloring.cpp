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

        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            int temp;

            cin >> temp;

            sum += temp; 
        }

        if(sum % 2 == 0)
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

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        int a[55]; // n max 50, thoda extra margin
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2) 
                odd++;
            else 
                even++;
        }

        if ((odd && even) || (odd >= 2) || (even == n)) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return 0;
}
