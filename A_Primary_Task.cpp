#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s.size();
        if (x == 3)
        {
            if (s[0] == '1' && s[1] == '0' && s[2] != '0' &&s[2]!='1')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (x>3){
            if (s[0] == '1' && s[1] == '0' && s[2] != '0')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

        }
        else {
            cout<<"NO"<<endl;
        }
    }
}