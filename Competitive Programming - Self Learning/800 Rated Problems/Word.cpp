#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string temp;

    cin >> temp;

    int str_size = temp.size();

    int lwr_count = 0;
    int upr_count = 0;

    for(int i = 0; i < str_size; i++)
    {
        if(int(temp[i]) >= 65 && int(temp[i]) <= 90)
        {
            upr_count++;
        }
        else if(int(temp[i]) >= 97 && int(temp[i]) <= 122)
        {
            lwr_count++;
        }
    }

   
    if(lwr_count < upr_count)
    {
        for(int i = 0; i < str_size; i++)
        {
            cout << char(toupper(temp[i]));
        }
    }
    else
    {
        for(int i = 0; i < str_size; i++)
        {
            cout << char(tolower(temp[i]));
        }
    }

    return 0;
}