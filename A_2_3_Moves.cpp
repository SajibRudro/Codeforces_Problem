#include <iostream>
using namespace std ;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if (x%3==0){
            cout<<x/3<<endl;
        }
        else if (x%2==0){
            cout<<x/2<<endl;
        }
        else{
            cout<<(x/3)+1<<endl;
        }
    }

}