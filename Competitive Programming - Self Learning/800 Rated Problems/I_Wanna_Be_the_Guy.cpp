#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr, int s)
{
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < (s - i - 1); j++)
        {
            if(arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(vector<int> arr, int s, int target)
{
    int low = 0;
    int high = (s - 1);

    while(low <= high)
    {
        int mid = low + ((high - low)/2);

        if(arr[mid] == target)
        {
            return true;
        }

        if(arr[mid] > target)
        {
            high = mid - 1;
        }

        if(arr[mid] < target)
        {
            low = mid + 1;
        }
    }

    return false;
}

int main()
{
    int n;

    cin >> n;
    
    int t1;
    cin >> t1; // number of levels player 1 can pass
    vector<int> A;
    for (int i = 0; i < t1; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }

    int t2;
    cin >> t2; // number of levels player 2 can pass
    vector<int> B;
    for (int i = 0; i < t2; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }

    bubbleSort(A, t1);
    bubbleSort(B, t2);

    bool allLevels = true;
    for (int level = 1; level <= n; level++) {
        if (!binarySearch(A, t1, level) && !binarySearch(B, t2, level)) {
            allLevels = false;
            break;
        }
    }

    if (allLevels) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";

    return 0;
}