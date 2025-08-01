#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int a[n];

    string result = "EASY";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] == 1)
        {
            result = "HARD";
        }
    }

    cout << result;

    return 0;
}