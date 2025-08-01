#include<bits/stdc++.h>
using namespace std;

int main()
{

    int A,B,C;

    cin >> A >> B >> C;

    int arr[3];

    arr[0] = A;
    arr[1] = B;
    arr[2] = C;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << arr[0] << endl << arr[1] << endl << arr[2] << endl << endl << A << endl << B << endl << C;

    return 0;
}