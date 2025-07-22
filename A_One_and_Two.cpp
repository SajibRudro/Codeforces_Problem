#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v[i];
        }
        int total1=1, total2=1;
        if (v[0] == 2)
        {
            total1 = v[0] * v[1];
            for (int i = 2; i < x; i++)
            {
                total2 *= v[i];
            }
            if (total1==total2){
                cout<<"2"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
        else
        {
            total1 = v[0];
            for (int i = 1; i < x; i++)
            {
                total2 *= v[i];
            }
            if (total1==total2){
                cout<<"1"<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }
    }
}