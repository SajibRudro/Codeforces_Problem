#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        for (int i =k; i >=0; i--)
        {
            if (i % x == y)
            {
                cout << i << endl;
                break;
            }
        }
    }
}