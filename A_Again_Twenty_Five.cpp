// #include <iostream>
// using namespace std ;
// int main (){
//     long long x;
//     cin >>x;
//     int total=1;
//     for (int i=0; i<=x;i++){
//         total =total *5;

//     }

//     int mod =total%100;
//     cout <<mod<<endl;
// }
#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;

    if (x == 1) {
        cout << 5 << endl;
    } else {
        cout << 25 << endl; 
    }

    return 0;
}
