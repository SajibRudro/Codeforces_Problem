#include <iostream>
#include <vector>
using namespace std;
int main (){
    int t;
    cin >>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        vector<int>v(x);
        for (int i=0;i<x;i++){
            cin>>v[i];
        }
        int count =0;
        int sum =0,a;
        for (int i=x-1;i>=0;i--){
            
            if (y<=v[i]){
                sum=sum+v[i];
                a=i;
                
            }
        }
        for (int i=a;i<x;i++){
            if (v[i]==0){
                count++;
            }
        }
        
        if (sum>=count ){
            cout<<count<<endl;
        }
        else{
            cout<<sum<<endl;
        }
    }
}