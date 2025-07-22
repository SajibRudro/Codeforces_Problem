#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[x];
    if (x != 1)
    {
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int i = 0; i < x; i++)
        {
            if (arr[i] ==arr[i + 1] )
            {
                count++;
            }
        }
        cout << count << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}