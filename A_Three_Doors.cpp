#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main (){
    int t;
    cin >>t;
    while (t--){
        int x;
        cin>>x;
        vector<int>v(3);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        if (v[x-1]!=0){
              x=v[x-1];
        }
        else{
            cout<<"NO"<<endl;
            continue;
            
        }
        if (v[x-1]!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
            
        }
        
        
    }
}