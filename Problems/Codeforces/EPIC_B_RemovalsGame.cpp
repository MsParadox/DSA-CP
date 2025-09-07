#include <bits/stdc++.h>
using namespace std;
long long a[300005], b[300005], c[300005];
 
int main() {
 
 
    long long t, n, i, chk;
    cin >> t;
 
    while (t--) {
        chk = 1;
        cin >> n;
 
        for (i = 1; i <= n; i++) {
            cin >> a[i];
            c[n - i + 1] = a[i];
        }
 
        for (i = 1; i <= n; i++) {
            cin >> b[i];
            if (b[i] != a[i]) chk = 0;
        }
 
        if (!chk) {
            chk = 1;
            for (i = 1; i <= n; i++) {
                if (b[i] != c[i]) {
                    chk = 0;
                    break;
                }
            }
        }
 
        cout << (chk ? "Bob\n" : "Alice\n");
    }

	return 0;
}