#include <iostream>
using namespace std;
int main (){
    int x,y;
    cin>>x>>y;
    int max;
    if (x>=y){
        max=x;
    }
    else {
        max=y;

    }
    if (max==1){
        cout<<"1/1"<<endl;
    }
    if (max==2){
        cout<<"5/6"<<endl;
    }
    if (max==3){
        cout<<"2/3"<<endl;
    }
    if (max==4){
        cout<<"1/2"<<endl;
    }
    if (max==5){
        cout<<"1/3"<<endl;
    }
    if (max==6){
        cout<<"1/6"<<endl;
    }
}