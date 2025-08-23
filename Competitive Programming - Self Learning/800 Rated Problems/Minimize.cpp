#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a,b;

        cin >> a >> b;
    
        int minimize = INT_MAX;
    
        for(int i = a; i <= b; i++)
        {
            int calc = ((i - a) + (b - i));
    
            if(calc < minimize)
            {
                minimize = calc;
            }
        }
    
        cout << minimize << "\n";
    }

    return 0;
}