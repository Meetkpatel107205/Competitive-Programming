#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int s)
{
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < (s - i - 1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;

    cin >> n;

    int A[n];
    int B[n];

    for(int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    bubbleSort(A, n);
    bubbleSort(B, n);

    bool isPermutation = true;

    for(int i = 0; i < n; i++)
    {
        if(A[i] != B[i])
        {
            isPermutation = false;
        }
    }

    if(isPermutation)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}