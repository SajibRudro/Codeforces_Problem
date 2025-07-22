#include <iostream>

using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int v[x];
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (abs(v[i] - v[j]) <= y)
            {
                count++;
            }
        }
    }
    int a=(count -x);
    cout <<a<< endl;
}