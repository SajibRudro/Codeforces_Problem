#include <iostream>
using namespace std;
int main (){
    int x;
    cin >>x;
    if (x>2){
        if(x%2==0&&x%4==0)
        cout <<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    else {
        if (x==2)
        cout<<"Yes"<<endl;
        else
        cout<<"NO"<<endl;
    }
}