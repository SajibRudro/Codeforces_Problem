#include <iostream>
using namespace std;
int main (){
    int t;
    cin >>t;
    while (t--){
        int x;
        cin >>x;
        int y=(180-x);
        float n=360/y;
        float m=n*y;
        
        if (m==360){
            cout<<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
       
    }
}