#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int s)
{
    for(int i = 0; i < (s - 1); i++)
    {
        int min_idx = i;

        for(int j = i + 1; j < s; j++)
        {
            if(arr[j] < arr[min_idx])
            {
                min_idx = j;    
            }
        }

        if(min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int main()
{
    string temp;

    cin >> temp;

    int str_len = temp.size();
    int nums_len = (str_len % 2 == 0) ? (str_len/2) : ((str_len/2) + 1);

    int numbers[100];

    int idx = 0;

    for(int i = 0; i < str_len; i = i + 2)
    {
        numbers[idx] = temp[i] - '0';
        idx++;
    }

    selectionSort(numbers, nums_len);

    for(int i = 0; i < nums_len; i++)
    {
        cout << numbers[i];
        if(i != nums_len - 1)
        {
            cout << "+";
        }
    }

    return 0;
}