#include <iostream>
#include <vector>
using namespace std;
int main (){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        vector<int>v(x);
        for (int i=0;i<x;i++){
            cin>>v[i];
        }
        int count_even=0;
        int count_odd=0;
        for (int i=0;i<x;i++){
            if (v[i]%2==0){
                count_even++;
            }
            else{
                count_odd++;
            }
        }
        if (count_even>=count_odd){
            cout<<count_odd<<endl;
        }
        else{
            cout<<count_even<<endl;
        }

    }
}