#include<bits/stdc++.h>
using namespace std;

long long fact(long long a)
{
    long long factorial = 1;
    
    for(int i = 1; i <= a; i++)
    {
        factorial = factorial * i;
    }
    
    return factorial;
}

int main()
{
    
    int t;
    
    cin >> t;
    
    long long n[t];
    
    for(int i = 0; i < t; i++)
    {
        cin >> n[i];
        
        cout << fact(n[i]) << endl;
    }
    
    return 0;
}