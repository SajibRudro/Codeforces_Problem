#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    string::iterator v= unique(s.begin(),s.end());//auto use kora jai ;
    s.erase(v,s.end());
    int x=s.size();
    if (x%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    
}