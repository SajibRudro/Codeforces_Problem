#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main (){
    int x;
    cin>>x;
    vector <int>v(12);
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int fix_point;
    for(int i=11;i>=0;i--){
        if (v[i]<=x){
            fix_point=i;

        }
    }
    int count =0,total =0;
    for(int i=fix_point;i>=0;i--){
        total+=v[i];
        
        if (total>x){
         break;
        }
       
    }
    cout<<count<<endl;

}