#include <iostream>
using namespace std;
int main (){
    string s;
    cin>>s;
    int sum=0;
    for (int i=0;i<s.size();i++){
        if (s[i]>110){
            sum+=(122-s[i])+1;
        }
        else{
            sum+=(s[i]-97);
        }
    }
    cout <<sum<<endl;
}