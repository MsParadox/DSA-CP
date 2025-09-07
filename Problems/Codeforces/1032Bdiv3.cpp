#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    cin >> t;
    while (t--) {
        int n;
        int n;
        cin >> n;

        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        bool f = false;
        for (int i = 1; i < n - 1; i++) {
            if (mp[s[i]] > 1) {
                f = true;
                break;
            }
        }
        if (f) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}