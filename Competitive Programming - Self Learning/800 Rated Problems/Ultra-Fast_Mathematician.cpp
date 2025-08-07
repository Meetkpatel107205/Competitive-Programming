#include<bits/stdc++.h>
using namespace std;

// long long binaryToDecimal(string str)
// {
//     int pow_of_number = 0;
//     int str_len = str.size();

//     long long binary = 0;

//     for(int i = str_len - 1; i >= 0; i--)
//     {
//         binary += (str[i] - '0')*(pow(2, pow_of_number));
//         pow_of_number++;
//     }

//     return binary;
// }

// string decimalToBinary(long long longnum)
// {
//     string binary = "";

//     while(longnum > 0)
//     {
//         long long rem = longnum % 2;
//         binary = to_string(rem) + binary;
//         longnum = longnum / 2;
//     }

//     return binary;
// }

int main()
{
    string s1,s2;

    cin >> s1 >> s2;

    // long long b1 = binaryToDecimal(s1);
    // long long b2 = binaryToDecimal(s2);

    // // cout << b1 << endl;
    // // cout << b2 << endl;

    // long long xor_result = b1 ^ b2;

    // string final_result = decimalToBinary(xor_result);

    // // cout << final_result;

    // int final_res_len = final_result.size();

    // if(final_res_len < s1.size())
    // {
    //     for(int i = final_res_len; i < s1.size(); i++)
    //     {
    //         cout << "0";
    //     }
    // }

    // cout << final_result;

    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] != s2[i])
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }

    return 0;
}