#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, a,b,i;
    cin >> n;

    vector<int> v(n);
    for ( i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort( v.end(),v.begin());
    for (int i=0;i<n-1;i++){
        int x=v[i]-v[i+1];
        int max =v[0]-v[1];
        if (x<max){
            a=i;

        }
    }
    cout <<i+1<<' '<<i+2<<endl;
}