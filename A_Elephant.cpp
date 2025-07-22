#include <iostream>
using namespace std;
int main (){
    int x;
    cin >>x;
    if (x%5!=0){
        int total_step=x/5+1;
        cout <<total_step<<endl;
    }
    else {
        int total =x/5;
        cout <<total<<endl;
    }
}