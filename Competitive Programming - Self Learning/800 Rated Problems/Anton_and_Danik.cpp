#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    char str[n];

    int countAnton = 0;
    int countDanik = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> str[i];

        if(str[i] == 'A')
        {
            countAnton++;
        }
        else if(str[i] == 'D')
        {
            countDanik++;
        }
    }

    if(countAnton > countDanik)
    {
        cout << "Anton";
    }
    else if(countAnton < countDanik)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}