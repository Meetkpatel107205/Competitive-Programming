#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long a,b,c,d;

    cin >> a >> b >> c >> d;

    string result = "NO";

    if((a + b - c) == d)
    {
        result = "YES";
    }
    else if((a + b * c) == d)
    {
        result = "YES";
    }
    else if((a - b + c) == d)
    {
        result = "YES";
    }
    else if((a - b * c) == d)
    {
        result = "YES";
    }
    else if((a * b + c) == d)
    {
        result = "YES";
    }
    else if((a * b - c) == d)
    {
        result = "YES";
    }

    cout << result;

    return 0;
}
