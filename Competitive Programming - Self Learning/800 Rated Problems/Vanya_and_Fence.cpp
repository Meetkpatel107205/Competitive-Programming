#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,hf;

    cin >> n >> hf;

    int hp[n];

    int result = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> hp[i];

        (hp[i] > hf) ? result += 2 : result += 1;
    }

    cout << result;

    return 0;
}