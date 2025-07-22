#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int  ABC=v[3];
    
    int c=ABC-v[2];
    int b=ABC-v[1];
    int a=ABC-v[0];
    cout<<a<<" "<<b<<" "<<c<<endl;
}