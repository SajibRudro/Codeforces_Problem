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
        string v;
        v += s[0];

        int x = s.size();
        for (int i = 1; i < x; i = i + 2)
        {
            if (i+1<x&&s[i] != s[i + 1])
            {

                v += s[i];
                v += s[i + 1];
            }
            else
            {

                v += s[i];
            }
        }

        cout << v << endl;
    }
}
// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         string v;
//         v += s[0];

//         int x = s.size();
//         for (int i = 1; i < x; i += 2)
//         {
//             v += s[i];
//             if (i + 1 < x && s[i] != s[i + 1]) 
//             {
//                 v += s[i + 1];
//             }
//         }

//         cout << v << endl;
//     }
// }
