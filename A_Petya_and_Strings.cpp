#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s, v;
    cin >> s >> v;
    int x = s.size() - 1;
    sort(s.begin(), s.end());
    sort(v.begin(), v.end());
    int count_v = 0, count_s = 0;
    for (int i = 0; i < x; i++)
    {
        if (v[x] > s[x])
        {
            count_v++;
        }
        else if (v[x] < s[x])
        {
            count_s++;
        }
    }
    if(count_v>count_s){
        cout <<"-1"<<endl;
    }
    else if (count_v<count_s){
        cout<<"1"<<endl;
    }
    else{
        cout <<"0"<<endl;
    }
}