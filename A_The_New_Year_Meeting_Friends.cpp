#include <iostream>
using namespace std;
int main (){
    int a,b,c;
    cin >>a>>b>>c;
    int mid,min ,max;
    if ((a>b&&a<c)){
        mid=a;
        min=b;
        max=c;

    }
    else if ((a<b&&a>c)){
        mid=a;
        min=c;
        max=b;

    }
    else if ((b>a&&b<c)){
        mid=b;
        min =a;
        max=c;
    }
    else if ((b<a&&b>c)){
        mid=b;
        min =c;
        max=a;
    }
    else if ((c>b&&c<a)){
        mid=c;
        min=b;
        max=a;
    }
    else if ((c<b&&c>a)){
        mid=c;
        min=a;
        max=b;
    }
    int total=(max-mid)+(mid-min);
    cout <<total<<endl;
}