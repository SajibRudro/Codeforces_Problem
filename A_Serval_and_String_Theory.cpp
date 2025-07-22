#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
    }
}

// bool canBeUniversal(string s, int k) {
//     string rev_s = s;
//     reverse(rev_s.begin(), rev_s.end()); // s এর রিভার্স বের করলাম

//     if (s < rev_s) {
//         return true; // ইতিমধ্যেই ছোট
//     }

//     int n = s.size();
//     int diff_count = 0;

//     // স্ট্রিং এবং উল্টো স্ট্রিংয়ের মধ্যে পার্থক্যের সংখ্যা গণনা
//     for (int i = 0; i < n; i++) {
//         if (s[i] != rev_s[i]) {
//             diff_count++;
//         }
//     }

//     // যদি প্রয়োজনীয় swap সংখ্যা k এর মধ্যে থাকে
//     return (diff_count / 2) <= k;
// }

