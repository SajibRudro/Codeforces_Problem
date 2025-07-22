#include <iostream>
using namespace std;
int main (){
    string s;
    cin >>s;
    int x=s.length();
    int count =0;
    for (int i=0;i<x;i++){
        if (s[i]=='7'||s[i]=='4'){
            count ++;

        }
    }
    
    if (count ==4||count ==7){
        cout<<"YES"<<endl;
    
    }
    else {
        cout <<"NO"<<endl;
    }
}
    