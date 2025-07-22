#include <iostream>
using namespace std ;
int main (){
    long long x,y;
    cin>>x>>y;
    long div=x/y;
    if (div%2!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}