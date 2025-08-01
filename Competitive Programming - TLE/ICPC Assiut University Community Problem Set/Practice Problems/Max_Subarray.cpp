#include<bits/stdc++.h>
using namespace std;

void printMaxSubarray(int arr[], int s)
{
    for (int i = 0; i < s; i++) 
    {
        int maxVal = INT_MIN;
        
        for (int j = i; j < s; j++)
        {
            maxVal = max(maxVal, arr[j]);
            cout << maxVal << " ";
        }
    }
}

int main()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;

        cin >> n;

        int temp[n];

        for(int j = 0; j < n; j++)
        {
            cin >> temp[j];
        }

        printMaxSubarray(temp, n);
        cout << endl;
    }
}