#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int x;
    cin>>x;
    vector<int>v(x);
    for (int i=0;i<x;i++){
        cin>>v[i];
    }
    sort (v.begin(),v.end());
    int sum=0;
    for (int i=0;i<x-1;i++){
        int diff=v[x-1]-v[i];
        sum+=diff;
        
    }
    cout<<sum<<endl;
}