#include <bits/stdc++.h>
#define st first
#define nd second
typedef long long ll;
using namespace std;

void solve() {
    ll n; cin >> n;
    ll b = (1LL<<62);
    vector<ll> ans;
    while (b > 0) {
        if (b&n && (n^b) != 0) {
            ans.push_back(n^b);
        }
        b >>= 1;
    }
    ans.push_back(n);
    cout << ans.size() << '\n';
    for (ll x: ans) cout << x << ' ';
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
}