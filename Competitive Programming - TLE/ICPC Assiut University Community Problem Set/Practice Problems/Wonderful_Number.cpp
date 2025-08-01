#include<bits/stdc++.h>
using namespace std;

string Decimal_To_Binary(int a)
{
    string binary = "";

    while(a > 0)
    {
        int binRem = a % 2;

        binary = to_string(binRem) + binary;

        a = a / 2;
    }

    return binary;
}

bool isPalindrome(string x)
{
    int start = 0;
    int end = x.size() - 1;

    for(int i = 0; i < (end/2); i++)
    {
        if(x[start] != x[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }

    return true;
}

int main()
{
    int n;

    cin >> n;

    if(n % 2 != 0)
    {
        string bin_str = Decimal_To_Binary(n);
        bool result = isPalindrome(bin_str);

        if(result)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}