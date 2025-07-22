#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    long long A,B;
    if ((a*b)>(c*c)){
    if (a%c!=0&&a>c){
        A=a/c+1;

    }
    else if (a<c){
        A=1;
    }
    else {
        A=a/c;
    }
    if (b%c!=0&&b>c){
        B=b/c+1;

    }
    else if (b<c){
        B=1;
    }
    else {
        B=b/c;
    }
    long long total =A*B;
    cout <<total<<endl;
}
else {
    
    cout <<"1"<<endl;
}
}