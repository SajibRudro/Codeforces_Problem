#include <iostream>
using namespace std ;
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    int d,e,f;
    cin >>d>>e>>f;
    int x;;
    cin >>x;
    int for_cups,for_madel;
    int sum_cup=a+b+c;
    if (sum_cup%5!=0){
        for_cups=sum_cup/5 +1;
    }
    else {
        for_cups=sum_cup/5;
    }
    int sum_madel=d+e+f;
    if (sum_madel%10!=0){
        for_madel=sum_madel/10+1;
    }
    else {
        for_madel=sum_madel/10;
    }
    int total =for_cups+for_madel;
    if (x>=total) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}