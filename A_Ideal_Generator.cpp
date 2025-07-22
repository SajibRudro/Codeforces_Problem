#include <iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int sum =0;
        for (int i=1;i<=x;i++){
            sum+=i;

        }
        if (sum%x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}