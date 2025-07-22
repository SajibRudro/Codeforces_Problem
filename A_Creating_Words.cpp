#include <iostream>
using namespace std;
int main (){
    int t;
    cin >>t;
    while (t--){
        string s;
        cin>>s;
        string v;
        cin>>v;
        char temp=s[0];
        s[0]=v[0];
        v[0]=temp;
        cout<<s<<" "<<v<<endl;
    }
}