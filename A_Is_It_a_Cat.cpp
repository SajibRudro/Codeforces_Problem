#include <iostream>
#include <cctype>
#include<algorithm>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        for (int i=0;i<x;i++){
            s[i]=tolower(s[i]);
        }
        auto v= unique(s.begin(),s.end());
        s.erase(v,s.end());
        if (s=="meow"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}