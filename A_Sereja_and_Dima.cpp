
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int y = x - 1;

    if (x % 2 != 0)
    {
        sum += v[x / 2];

        for (int i = 0; i < x / 2; i++)
        {

            sum += max(v[i], v[y]);
            y--;
        }
    }
    else
    {

        for (int i = 0; i < x / 2; i++)
        {

            sum += max(v[i], v[y]);
            y--;
        }
    }
    int total_sum = 0;
    for (int i = 0; i < x; i++)
    {
        total_sum += v[i];
    }
    int diff = total_sum - sum;
    cout << sum << " " << diff << endl;
}