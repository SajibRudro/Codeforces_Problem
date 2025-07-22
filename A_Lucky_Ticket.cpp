// #include <iostream>
// #include <vector>
// using namespace std;
// int main (){
//     int x;
//     cin>>x;
//     long long ticket_num;
//     cin>>ticket_num;
//     vector<int>v;
//     while(ticket_num!=0){
//         int mod=ticket_num%10;
//         v.push_back(mod);
//         if (mod!=4&&mod!=7){
//             cout<<"NO"<<endl;
//             return 0;
//         }
//         ticket_num/=10;
//     }
//     int sum_first_half=0,sum_second_half=0;
//     for(int i=0;i<x/2;i++){
//         sum_first_half+=v[i];
//     }
//     for(int i=x/2;i<x;i++){
//         sum_second_half+=v[i];
//     }
//     if (sum_first_half==sum_second_half){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     cout<<sum_first_half<<endl;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    string ticket;
    cin >> ticket;

    if (ticket.size() != x) {
        cout << "NO" << endl;
        return 0;
    }

    int sum_first_half = 0, sum_second_half = 0;

    for (int i = 0; i < x; i++) {
        char ch = ticket[i];
        if (ch != '4' && ch != '7') {
            cout << "NO" << endl;
            return 0;
        }
        if (i < x / 2)
            sum_first_half += ch - '0';
        else
            sum_second_half += ch - '0';
    }

    if (sum_first_half == sum_second_half) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
