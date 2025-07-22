#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int Process_one = v[0]+v[1]+v[2];
    int Process_two = (v[0] * 2 + v[1] * 2);
    if (Process_one >= Process_two)
    {
        cout << Process_two << endl;
    }
    else
    {
        cout << Process_one << endl;
    }
}