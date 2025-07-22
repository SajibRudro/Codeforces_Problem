#include <iostream>
using namespace std;
int main (){
    string s;
    cin>>s;
    string v;
    cin>>v;
    int x=s.length();
    int a;
    string y;
    for (size_t i=0;i<x;i++){
        if (s[i]!=v[i]){
            a='1';

        }
        else {
            a='0';

        }
        
        y+=a;
    }
    
    
        cout<<y<<endl;
    

    
  
}