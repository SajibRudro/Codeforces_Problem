#include <iostream>
#include <algorithm>
using namespace std;
int  main (){
    string s,v,b;
    cin>>s>>v>>b;
    string a=s+v;
    sort(a.begin(),a.end());
    sort (b.begin(),b.end());
    if (a==b){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     string s, v, b;
//     cin >> s >> v >> b;

//     string a = s + v;

//     // Sort both strings to compare as permutations
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if (a == b) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }
