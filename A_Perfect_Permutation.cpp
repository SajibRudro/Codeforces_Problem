#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x);
    if (x%2!=0){
        cout<<"-1"<<endl;
        return 0;
    }
    for (int i = 0; i < x; i += 2)
    {

        v[i] = i + 2;
    }
    for (int i = 1; i < x; i += 2)
    {

        v[i] = i;
    }
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
}