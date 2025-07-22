#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int a = 0, b = 0, c = 0;
    for (int i = 0; i <= x; i = i + 3)
    {
        a += arr[i];
    }
    for (int i = 1; i <= x; i = i + 3)
    {
        b += arr[i];
    }
    for (int i = 2; i <= x; i = i + 3)
    {
        c +=  arr[i];
    }
    if (a > b && a > c)
    {
        cout << "chest" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "biceps" << endl;
    }
    else if (c>a && c>b)
    {
        cout << "back" << endl;
    }
}