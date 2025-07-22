#include <iostream>
using namespace std;
int main()
{
    int a, b, x, y;
    cin >> a >> b;
    int draw;
    if (a==b){
        cout <<"0"<<' '<<"6"<<' '<<'0'<<endl; 
        return 0;

        
    }
    if (a < b)
    {
        x = (6 - b) + 1;
        y = (a - 1) + 1;
    }
    else
    {
        x = (6 - a) + 1;
        y = (b - 1) + 1;
    }
    int Diff = 6 - (x + y);
    if (Diff % 2 == 0)
    {
        x = x + (Diff / 2);
        y = y + (Diff / 2);
        draw = 0;
    }
    else
    {
        x = x + (Diff / 2);
        y = y + (Diff / 2);
        draw = 1;
    }
    if (a<b){
    cout << y << ' ' << draw << ' ' << x << endl;
    }
    else {
        cout << x << ' ' << draw << ' ' << y << endl;

    }
}