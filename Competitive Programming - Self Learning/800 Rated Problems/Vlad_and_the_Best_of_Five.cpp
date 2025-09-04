#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; 

    cin >> t;

    while(t--)
    {
        string str;

        cin >> str;

        int A = 0;
        int B = 0;

        for(int i = 0; i < 5; i++)
        {
            if(str[i] == 'A')
            {
                A++;
            }
            else
            {
                B++;
            }
        }

        if(A > B)
        {
            cout << "A\n";
        }
        else
        {
            cout << "B\n";
        }
    }

    return 0;
}