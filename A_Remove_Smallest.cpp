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
        vector <int>v(x);
        for (int i=0;i<x;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int count =0;
        for (int i=x-1;i>0;i--){
            if (v[i]-v[i-1]==0||v[i]-v[i-1]==1){
                count++;
            }
        }
        if (count==x-1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }

}