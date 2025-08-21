#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int len_a,len_b;

        string a,b,c;
    
        cin >> len_a >> a >> len_b >> b >> c;
    
        string result = a;
    
        for(int i = 0; i < c.size(); i++)
        {
            if(c[i] == 'V')
            {
                result = b[i] + result;
            }
            else
            {
                result = result + b[i];   
            }
        }
    
        cout << result << endl;
    }

    return 0;
}