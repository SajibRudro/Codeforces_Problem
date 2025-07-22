#include <iostream>
#include <vector>
using namespace std ;
int main (){
    int x;
    cin>>x;
    vector<int>v(x);
    for (int i=0;i<x;i++){
        cin>>v[i];
    }
    int count=0;
    for (int i=0;i<x-1;i++){
        if (v[i]<v[i+1]){
            count++;
        }
    }
    cout<<count<<endl;

}