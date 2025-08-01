#include<iostream>
#include<algorithm>
using namespace std;

string binarySearch(int arr[], int s, int target)
{
    int left = 0;
    int right = s - 1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
            return "found";
        else if(target > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return "not found";
}

int main()
{
    int N, Q;
    cin >> N >> Q;

    int* a = new int[N]; // use dynamic allocation for large arrays

    for(int i = 0; i < N; i++)
        cin >> a[i];

    sort(a, a + N); // ✅ fast sorting

    // 🔍 Explanation:
    // 1. sort()
    // This is a C++ Standard Library function from the <algorithm> header.
    // It sorts elements in a given range.
    
    // 2. a
    // This is the starting address of the array — i.e., a[0].
    
    // 3. a + N
    // This is the end address (exclusive) — i.e., just past a[N-1].
    // So it sorts from a[0] to a[N-1].

    while(Q--)
    {
        int temp;
        cin >> temp;
        cout << binarySearch(a, N, temp) << endl;
    }

    delete[] a; // free memory
    return 0;
}

// #include<iostream>
// using namespace std;

// string binarySearch(int arr[], int s, int target)
// {
//     int left = 0;
//     int right = (s - 1);

//     while(left <= right)
//     {
//         int mid = left + ((right - left)/2);

//         if(arr[mid] == target)
//         {
//             return "found";
//         }
//         else if(target > arr[mid])
//         {
//             left = mid + 1;
//         }
//         else if(target < arr[mid])
//         {
//             right = mid - 1;
//         }
//     }

//     return "not found";
// }

// int main()
// {
//     int N,Q;

//     cin >> N >> Q;

//     int a[N];

//     for(int i = 0; i < N; i++)
//     {
//         cin >> a[i];
//     }

//     for(int i = 0; i < N - 1; i++)
//     {
//         for(int j = 0; j < N - i - 1; j++)
//         {
//             if(a[j + 1] < a[j])
//             {
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }

//     for(int i = 0; i < Q; i++)
//     {
//         int temp;
//         cin >> temp;
//         string result = binarySearch(a, N, temp);
//         cout << result << endl;
//     }

//     return 0;
// }
