#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    int count_minute = 0;
    if (x==1){
        if (v[0]>15){
            count_minute=15;
        }
        else{
            count_minute=v[0]+15;
        }
        cout<<count_minute<<endl;
    }
    else if (v[0] <= 15)
    {
        for (int i = 0; i < x - 1; i++)
        {

            if (v[i + 1] - v[i] > 15)
            {
                count_minute = v[i] + 15;
                break;
            }
            else
            {
                int y = v[i + 1]+15;
                if (y<90){
                    count_minute=y;
                }
                else{
                    count_minute=90;
                }
            }
        }
        cout << count_minute << endl;
    }
    else{
        cout<<"15"<<endl;
    }
    
}