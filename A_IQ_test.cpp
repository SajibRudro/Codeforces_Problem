#include <iostream>
using namespace std;
int main (){
    int t,y,x;
    cin>>t;
    int arr[t];
    for (int i=0; i<t;i++){
        cin >>arr[i];
    }
    int even_count=0,odd_count=0;
    for (int i=0; i<t;i++){
       if (arr[i]%2!=0){
        odd_count++;
        y=i;

       }
       else {
        even_count++;
        x=i;

       }
    }
    if (odd_count>even_count){
        cout<<x+1<<endl;
    }
    else {
        cout<<y+1<<endl;
    }

}