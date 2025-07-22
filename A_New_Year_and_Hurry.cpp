#include <iostream>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;
    int diff=240-y;
    int count =0;
    int i=1;
    while(diff>=5*i){
        diff=diff-5*i;
        i++;
        count++;
    }
    if (count>x){
        cout<<x<<endl;
    }
    else{
    cout<<count<<endl;
    }
}