#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int maxx = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] > maxx)
        {
            maxx = a[i];
        }
    }
    
    cout << maxx;
    
    return 0;
}