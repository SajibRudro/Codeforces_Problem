#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>v(x);
        for(int i=0;i<x;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int diff=v[x-1]-v[0];
        cout<<diff<<endl;
    }
}