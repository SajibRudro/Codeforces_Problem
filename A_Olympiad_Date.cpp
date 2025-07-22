#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int  main (){
    int t;
    cin>>t;
    while (t--){
        int x;
        cin>>x;
        vector<int>v;
        int arr[x],a,b,c,d,e;
        for (int i=0;i<x;i++){
            cin>>arr[i];
        }
        int need_0=3,need_1=1,need_2=2,need_3=1,need_5=1;
        for (int i=0;i<x;i++){
            if (arr[i]==0&&need_0!=0){
                need_0--;
                v[0]=i;

            }
        }
        for (int i=0;i<x;i++){
            if (arr[i]==1&&need_1!=0){
                need_1--;
                v[1]=i;
            }
        }
        for (int i=2;i<x;i++){
            if (arr[i]==2&&need_2!=0){
                need_2--;
                v[2]=i;
            }
        }
        for (int i=3;i<x;i++){
            if (arr[i]==3&&need_0!=3){
                need_3--;
                v[3]=i;
            }
        }
        for (int i=5;i<x;i++){
            if (arr[i]==5&&need_5!=0){
                need_5--;
                v[4]=i;
                
            }
        }
        sort(v.begin(),v.end());
        cout<<v[4]<<endl;
    }
}