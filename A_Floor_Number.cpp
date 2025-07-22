#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x != 1 && x != 2)
        {
            x = x - 2;
            for  (int i=x;i<=10000000;i++)
            {
                if (i%y==0){
                int a = i/ y + 1;
                cout << a << endl;
                break;
                }
            }
        }
        else
        {
            cout << "1" << endl;
        }
    }
}