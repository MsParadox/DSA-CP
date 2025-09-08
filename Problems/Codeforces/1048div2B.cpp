
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
 cin>>t;

    while (t--) {
        int n;
        long long m, ans = 0;;
        cin >> n >> m;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend()); 

        long long k = (n < m ? n : m);    
        

        for (int i = 0; i < k; i++) {
            ans += a[i] * (m - (long long)i);
        }

        cout << ans << endl;
    }

    return 0;
}