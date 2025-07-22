#include <iostream>
using namespace std;
int main()
{
    long long a, b,c,diff;
    cin >> a >> b;
    if (a%2==0){
       diff = a / 2;
    }
    else {
        diff=(a/2)+1;
    }
    long long count = 0;
    if (diff>=b)
    {
        for (int i = 1; i <= a; i = i + 2)
        {
            count++;
            if (count  == b)
            {
                c=i;
                break;
            }
        }
        cout <<c <<endl;
    }
    else
    {
        for (int i = 2; i <= a; i = i + 2)
        {
            count++;
            if (count+diff== b)
            {
                c=i;
                break;
            }
        }
        cout <<c<<endl;
    }

 }

//     int arr[a];
//     int count =0;
//     for (int i=0;i<a;i++){
//         int y=i+1;
//         if (y%2!=0){
//             arr[i]=y;
//             count++;
//         }
//     }
//     int x=count -1;
//     for (int j=0;j<a;j++){

//         if ((j+1)%2==0){
//             arr[x]=j+1;
//             x++;

//         }
//     }
//     for (int i=0;i<a;i++){
//     cout<<arr[i]<<endl;
//     }
// }