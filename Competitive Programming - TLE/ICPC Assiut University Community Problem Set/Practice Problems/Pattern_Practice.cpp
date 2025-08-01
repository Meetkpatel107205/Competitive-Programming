#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 || i == (n-1))
            {
                cout << "*";
            }
            else if((i + j) == (n-1) && i > 0 && i < (n - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    //   01234
    // 0 *****
    // 1    *
    // 2   *
    // 3  *
    // 4 *****

    return 0;
}