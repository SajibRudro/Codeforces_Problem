#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char ch;
    
    string s;
    int i=0;

    while (cin >> ch) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            
            s.push_back(ch);
            
        }
    }
    sort(s.begin(),s.end());
    auto v=unique(s.begin(),s.end());
    s.erase(v,s.end());

    cout << s.size() << endl;
    return 0;
}
