#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    vector<int> v(y);
    for (int i = 0; i < y; i++)
    {
        cin >> v[i];
    }
    int z;
    cin >> z;
    vector<int> s(z);
    for (int i = 0; i < z; i++)
    {
        cin >> s[i];
    }
    v.insert(v.end(), s.begin(), s.end());
    
    sort(v.begin(), v.end());
    auto num = unique(v.begin(), v.end());
    v.erase(num, v.end());
    int case_2 = v.size();
    if (x==case_2){
        cout<<"I become the guy."<<endl;
    }
    else {
        cout<<"Oh, my keyboard!"<<endl;
    }
}