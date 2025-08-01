#include<bits/stdc++.h>
using namespace std;

bool binarySearchInMatrix(long long arr[], long long col, long long tar)
{
    long long low = 0;
    long long high = col - 1;

    while(low <= high)
    {
        long long mid = low + ((high - low)/2);

        if(arr[mid] == tar)
        {
            return true;
        }

        if(arr[mid] < tar)
        {
            low = mid + 1;
        }

        if(arr[mid] > tar)
        {
            high = mid - 1;
        }
    }

    return false;
}

int main()
{
    long long row,column;

    cin >> row >> column;

    long long a[row][column];

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }

    long long target;

    cin >> target;

    bool result = false;

    for(int i = 0; i < row; i++)
    {
        bool temp = binarySearchInMatrix(a[i], column, target);

        if(temp == true)
        {
            result = true;
        }
    }

    if(result)
    {
        cout << "will not take number";
    }
    else
    {
        cout << "will take number";
    }

    return 0;
}