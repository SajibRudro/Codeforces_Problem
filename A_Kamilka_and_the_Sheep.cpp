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
        long long n;
        cin >> n;
        vector<long long> v(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long sum = 0;
        for (long long i = n - 1; i > 0; i--)
        {
            sum += (v[i] - v[i - 1]);
        }

        cout << sum << endl;
    }

    return 0;
}
