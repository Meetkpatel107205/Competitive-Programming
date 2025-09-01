#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int points = 0;

        for(int i = 1; i <= 10; i++)
        {
            for(int j = 1; j <= 10; j++)
            {
                char temp;
    
                cin >> temp;
    
                if(temp == 'X')
                {
                    int ring = min({i, j, 11 - i, 11 - j});
                    points += ring;
                }
            }
        }
        
        cout << points << "\n";
    }

    return 0;
}