#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, limit, count = 0;
    cin >> x >> limit;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
        if (v[i] > limit)
        {
            count++;
        }
    }
    
    if (count > 0)
    {
        int start_point, end_point;
        for (int i = 0; i < x; i++)
        {
            if (v[i] > limit)
            {
                start_point = i;
                break;
            }
        }
        for (int i = x - 1; i >= 0; i--)
        {
            if (v[i] > limit)
            {
                end_point = i;
                break;
            }
        }
        int total = x - ((end_point - start_point) + 1);
        cout << total;
    }
    else
    {
        cout << x << endl;
    }
}