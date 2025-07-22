#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    sort(s.begin(), s.end());
    auto v = unique(s.begin(), s.end());
    s.erase(v, s.end());
    int y = s.size();

    if (y == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}