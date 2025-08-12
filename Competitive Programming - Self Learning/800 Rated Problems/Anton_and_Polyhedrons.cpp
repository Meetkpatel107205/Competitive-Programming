#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int total_faces = 0;

    while(n--)
    {
        string str;

        cin >> str;

        if(str == "Tetrahedron")
        {
            total_faces += 4;
        }
        else if(str == "Cube")
        {
            total_faces += 6;
        }
        else if(str == "Octahedron")
        {
            total_faces += 8;
        }
        else if(str == "Dodecahedron")
        {
            total_faces += 12;
        }
        else if(str == "Icosahedron")
        {
            total_faces += 20;
        }
    }

    cout << total_faces;

    return 0;
}