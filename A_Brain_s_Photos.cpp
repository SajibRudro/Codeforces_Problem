#include <iostream>
using namespace std;
int main()
{
    int t, x;
    int count = 0;
    cin >> t >> x;
    while (t--)
    {
        char ch[x];
        
        for (int i = 0; i < x; i++)
        {
            cin>>ch[i];
            if (ch[i] != 'B' && ch[i] != 'W'&&ch[i]!='G')
            {

                count++;
            }
        }
        
    }
    if (count != 0)
        {
            cout <<"#Color"  << endl;
            
        }
        else 
        {
            cout <<"#Black&White" << endl;
            
        }
}