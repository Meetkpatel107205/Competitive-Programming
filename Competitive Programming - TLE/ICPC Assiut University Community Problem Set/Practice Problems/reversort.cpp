#include<iostream>
using namespace std;

int findMin(int arr[], int a, int b)
{
    int min = a;

    for(int j = a; j <= b; j++)
    {
        if(arr[j] < arr[min])
        {
            min = j;
        }
    }

    cout << min << " " << endl;

    return min;
}

void reverse(int arr[],int s, int x, int y)
{
    int temp_arr[s] = {0};

    for(int j = 0; j < s; j++)
    {
        temp_arr[j] = arr[j];
    }

    int idx = x;
    for(int k=y; k >= x; k--)
    {
        arr[idx] = temp_arr[k];
        idx++;
    }
}

int main()
{

    int a[] = {4, 2, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int result = 0;

    for(int i = 0; i < n - 1; i++)
    {
        int min_i = findMin(a, i, n-1);
        reverse(a, n, i, min_i);
        result += (min_i - i + 1);
    }

    cout << endl;

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl << endl << "Cost of Reversort : " << result;

    return 0;
}