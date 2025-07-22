// #include <iostream>
// using namespace std ;
// int main (){
//     long long n,k;
//     cin>>n>>k;
//     for(int i=n+1;i<=n+k;i++){
//         if (i%k==0){
//             cout<<i<<endl;
//             break;
//         }
//     }
// }
#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long x = (n / k + 1) * k;
    cout << x << endl;
    return 0;
}
