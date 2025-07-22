#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int count_zero = 0;
        for (int i = 0; i < x; i++)
        {
            if (v[i] == 0)
            {
                count_zero++;
            }
        }
        auto y = unique(v.begin(), v.end());
        v.erase(y, v.end());
        int diff = x - v.size();
        if (diff > 0)
        {
            if (count_zero > 0)
            {
                int diff = (x - v.size()) - (count_zero-2);
                cout << diff << endl;
            }
            else
            {
                int diff = (x - v.size());
                cout << diff * 2 << endl;
            }
        }
        else{
            cout<<x<<endl;
        }
    }
}
