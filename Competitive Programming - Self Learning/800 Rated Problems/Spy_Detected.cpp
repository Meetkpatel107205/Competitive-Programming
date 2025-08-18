#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // If first two are equal → spy is some later element
        if (a[0] == a[1])
        {
            for (int i = 2; i < n; i++)
            {
                if (a[i] != a[0])
                {
                    cout << i + 1 << "\n"; // index (1-based)
                    break;
                }
            }
        } 
        // If first two are different → spy is among them
        else
        {
            if (a[0] == a[2])
            {
                cout << 2 << "\n"; // a[1] is spy
            }
            else
            {
                cout << 1 << "\n"; // a[0] is spy
            }
        }
    }

    return 0;
}