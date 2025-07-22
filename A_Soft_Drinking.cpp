#include <iostream>
using namespace std;
int main (){
    int arr[8];
    for (int i=0;i<8;i++){
        cin >>arr[i];
    }
    int x=(arr[1]*arr[2])/arr[6];
    int y=(arr[3]*arr[4]);
    int z=arr[5]/arr[7];
    int min;
    if (x<=y&&x<=z) min=x;
    if (y<=x&&y<=z) min=y;
    if (z<=x&&z<=y) min =z;
    int total =min /arr[0];
    cout <<total<<endl;
}