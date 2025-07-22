#include <iostream>
using namespace std;
int main (){
    long long  x,y;
    cin >>x;
    
    long long even=(x/2)*(x/2+1);
    long long odd=((x+1)/2)*((x+1)/2);
    y=even -odd;
    cout<<y<<endl;
    
}