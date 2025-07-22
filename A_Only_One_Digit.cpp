#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        vector<int> v;
        while (x != 0) {
            v.push_back(x % 10);
            x = x / 10;
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }
    
}
