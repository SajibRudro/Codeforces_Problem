#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector <int>v(4);
    for (int i=0;i<4;i++){
        cin>>v[i];
    }

    sort (v.begin(),v.end());
    auto x=unique(v.begin(),v.end());
    v.erase(x,v.end());
    
    int y=v.size();
    cout<<4-y<<endl;

}