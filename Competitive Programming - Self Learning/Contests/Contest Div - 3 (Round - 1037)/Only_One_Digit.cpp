#include<bits/stdc++.h>
using namespace std;

void printSmallestCommon(int a)
{
    int result = INT_MAX;

    while(a > 0)
    {
        int last = a % 10;

        if(last < result)
        {
            result = last;
        }

        a = a / 10;
    }

    cout << result << endl;
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int temp;

        cin >> temp;

        printSmallestCommon(temp);
    }

    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int t,x;cin>>t;
//     while(t--){
//         cin>>x;
//         int m=9;
//         while(x) m=min(m,x%10), x/=10;
//         cout<<m<<'\n';
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int t,x;cin>>t;
//     while(t--){
//         cin>>x;
//         int m=9;
//         for(;x;x/=10) m=(x%10<m)?x%10:m;
//         cout<<m<<'\n';
//     }
// }
