#include <iostream>
using namespace std;
int main()
{
    int a, b, min, max;
    cin >> a >> b;
    if (a > b)
    {
        min = b;
        max = a;
    }
    else
    {
        min = a;
        max = b;
    }
    int c =(max-min)/2;
    cout<<min<<' '<<c<<endl;
}