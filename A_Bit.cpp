#include <iostream>
using namespace std;
int main (){
    int t;
    int sum=0;
    cin >>t;
    while (t--){

    
    string s;
    cin>>s;
    
    if (s=="++X"||s=="X++"){
        sum =sum +1;
    }
    else {
        sum=sum-1;
    }
}
cout<<sum<<endl;
}