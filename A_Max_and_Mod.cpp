// #include <iostream>
// using namespace std;
// int main (){
//     int t;
//     cin>>t;
//     while (t--){
//         long long x;
//         cin>>x;
//         if (x%2!=0){
//             for (int i=x;i>0;i--){
//                 cout<<i<<" ";
//             }
//             cout<<endl;
//         }
//         else {
//             cout<<"-1"<<endl;
//         }
//     }
// }
// 
// 
// #include <iostream>

#include <iostream>
using namespace std;

// 
// 
// 
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> perm(n);

        if (n == 2 || n == 4) {
            cout << "-1\n";
        } else {
            if (n == 3) {
                perm[0] = 3;
                perm[1] = 2;
                perm[2] = 1;
            } else if (n == 5) {
                perm[0] = 1;
                perm[1] = 5;
                perm[2] = 2;
                perm[3] = 3;
                perm[4] = 4;
            } else {
                for (int i = 0; i < n; i++) {
                    perm[i] = i + 1;
                }
            }
            for (int i = 0; i < n; i++) {
                cout << perm[i] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
