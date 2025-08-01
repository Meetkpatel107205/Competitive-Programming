#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string a = "abcdefghijklmnopqrstuvwxyzadsfvaaf";

    int a_len = a.size();

    for(int i = 0; i < a_len; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
        {
            a[i] = char(int(a[i]) - 32);
        }
    }

    bool isPangram = true;

    for(char j = 'A'; j <= 'Z'; j++)
    {
        if(a.find(j) == string::npos)
        {
            isPangram = false;
        }
    }

    if(isPangram)
    {
        cout << "Pangram";
    }
    else
    {
        cout << "Not Pangram";
    }
}