#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int s, int t)
{
    int low = 0;
    int high = s - 1;

    while(low <= high)
    {
        int mid = low + ((high - low)/2);

        if(arr[mid] == t)
        {
            return mid;
        }

        if(arr[mid] > t)
        {
            high = mid - 1;
        }

        if(arr[mid] < t)
        {
            low = mid + 1;
        }
    }

    return -1;
}

int linearSearch(int arr[], int n, int t)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == t)
        {
            return (i + 1);
        }
    }

    return -1;
}

int main()
{
    int n;

    cin >> n;

    int a[n];

    int countOne = 0;
    int countTwo = 0;
    int countThree = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] == 1)
        {
            countOne++;
        }
        else if(a[i] == 2)
        {
            countTwo++;
        }
        else if(a[i] == 3)
        {
            countThree++;
        }
    }

    int teamCount = min(min(countOne, countTwo), countThree);

    cout << teamCount << "\n";

    for(int i = 0; i < teamCount; i++)
    {
        int findOne = linearSearch(a, n, 1);

        cout << findOne << " ";

        a[findOne - 1] = -1;

        int findTwo = linearSearch(a, n, 2);

        cout << findTwo << " ";

        a[findTwo - 1] = -1;

        int findThree = linearSearch(a, n, 3);

        cout << findThree;

        a[findThree - 1] = -1;

        cout << "\n";
    }

    return 0;
}