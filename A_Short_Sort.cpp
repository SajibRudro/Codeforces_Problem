#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string x;
        cin >> x;
        if (x == "abc" || x == "bac" || x == "acb" || x == "cba" )
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}   