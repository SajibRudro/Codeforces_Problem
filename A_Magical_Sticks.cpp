#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long y;
        if (x % 2 != 0)
        {
            cout << x / 2 + 1 << endl;
        }
        else
        {
            cout << x / 2 << endl;
        }
    }
}
