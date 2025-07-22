#include <iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin >>a>>b;
        int c=(a+b)/2;
        int total =(c-a)+(b-c);
        cout <<total<<endl;
    }
}