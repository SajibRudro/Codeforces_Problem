#include <iostream>
using namespace std;
int main()
{
    int t;
    int sum = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        
        if (s == "Icosahedron")
        {
            sum+=20;
        }
        if (s =="Tetrahedron")
        {
            sum+=4;
        }
        if (s =="Cube")
        {
            sum+=6;
        }
        if (s =="Octahedron")
        {
            sum+=8;
        }
        if (s =="Dodecahedron")
        {
            sum+=12;
        }
    }
    cout<<sum<<endl;
}