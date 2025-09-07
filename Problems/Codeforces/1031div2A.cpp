#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    cin >> t;
    while (t--) {
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        if (k < a && k < b) {
            cout << 0 << endl;
            continue;
        }
        int ans = 0;
        if (x < y) {
            if (k >= a) {
                int t = (k - a + x) / x;
                ans += t;
                k -= t * x;
            }
            if (k >= b) ans += (k - b + y) / y;
        } else {
            if (k >= b) {
                int t = (k - b + y) / y;
                ans += t;
                k -= t * y;
            }
            if (k >= a) ans += (k - a + x) / x;
        }
        cout << ans << endl;
    }
    return 0;
}