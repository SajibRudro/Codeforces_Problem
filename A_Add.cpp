#include <iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
int main (){
    int x,y;
    cin>>x>>y;
    int sum=add(x,y);
    cout<<sum<<endl;
}