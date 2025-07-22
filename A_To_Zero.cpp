#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c;

        if (a % 2 != 0)
        {
            a = a - b;
            if (a % (b - 1) == 0)
            {
                c = a / (b - 1) + 1;
                cout << c << endl;
            }
            else
            {
                c = a / (b - 1) + 2;
                cout << c << endl;
            }
        }
        else
        {
            if (a % (b - 1) == 0)
            {
                c = a / (b - 1);
                cout << c << endl;
            }
            else
            {
                c = a / (b - 1) + 1;
                cout << c << endl;
            }
        }
    }
}