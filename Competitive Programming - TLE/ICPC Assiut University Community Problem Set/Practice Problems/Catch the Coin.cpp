#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        
        if(y < -1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}