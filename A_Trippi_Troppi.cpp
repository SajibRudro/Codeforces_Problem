#include <iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--){
        string s,v,x;
        cin>>s>>v>>x;
        string y;
        
            y+=s[0];
            y+=v[0];
            y+=x[0];
        cout<<y<<endl;
    }
}