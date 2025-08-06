#include<bits/stdc++.h>
using namespace std;

// int binarySearch(int arr[], int s, int target)
// {
//     int low = 0;
//     int high = (s - 1);

//     while(low <= high)
//     {
//         int mid = low + ((high - low)/2);

//         if(target == arr[mid])
//         {
//             return mid;
//         }

//         if(target < arr[mid])
//         {
//             high = mid - 1;
//         }

//         if(target > arr[mid])
//         {
//             low = mid + 1;
//         }
//     }

//     return -1;
// }

// Method - 1 :-

int linearSearch(int arr[], int n, int target)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n;

    cin >> n;

    int p[n];

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++)
    {
        int result = linearSearch(p, n, (i + 1));

        if(result != -1)
        {
            cout << (result + 1) << " ";
        }
    }

    return 0;
}

// Method - 2 :-

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int p[n];          // p[i] = friend i+1 gave gift to p[i]
//     int res[n];        // res[j] = friend who gave gift to friend j+1

//     for(int i = 0; i < n; i++) {
//         cin >> p[i];
//         res[p[i] - 1] = i + 1;  // friend i+1 gave to p[i], so p[i] received from i+1
//     }

//     for(int i = 0; i < n; i++) {
//         cout << res[i] << " ";
//     }

//     return 0;
// }
