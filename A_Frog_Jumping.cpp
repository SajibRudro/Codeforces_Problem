#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long sum=0;
        if (k%2==0){
            sum =a*(k/2)-b*(k/2);
        }
        else{
            sum=a*(k/2+1)-b*(k/2);
        }
        cout<<sum <<endl;
    }
}