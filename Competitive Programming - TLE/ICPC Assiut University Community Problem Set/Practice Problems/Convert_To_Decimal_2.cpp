#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int a)
{
    string binary = "";

    while(a > 0)
    {
        binary = to_string(a % 2) + binary;
        a = a / 2;
    }

    return binary;
}

int binaryToDecimal(string binaryStr)
{
    int decimal = 0;
    int power = 0;

    for(int i = binaryStr.length() - 1; i >= 0; i--)
    {
        if(binaryStr[i] == '1')
        {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

string getAppendedOne(string binary)
{
    string appendedOne = "";
    for(int i = 0; i < binary.length(); i++)
    {
        if(binary[i] == '1')
        {
            appendedOne += binary[i];
        }
    }
    return appendedOne;
}

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int temp;

        cin >> temp;

        string res = decimalToBinary(temp);

        string res1 = getAppendedOne(res);

        int fr = binaryToDecimal(res1);

        cout << fr << endl;
    }

    return 0;
}