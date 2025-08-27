#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int front = 0;
        int rear = n - 1;
        int charCount = 0;

        while(front < rear)
        {
            if(str[front] != str[rear])
            {
                charCount += 2;
                front++;
                rear--;
            }
            else
            {
                // Stop immediately when they match
                break;
            }
        }

        cout << (n - charCount) << "\n";
    }

    return 0;
}