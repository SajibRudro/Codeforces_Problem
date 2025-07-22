#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count = 0;
    int y = 0;
    for (int i = 1; i <= x; i++)
    {
        y = y + i;
        if (x >= y)
        {
            x = x - y;
            count++;
        }
    }
    cout << count << endl;
}