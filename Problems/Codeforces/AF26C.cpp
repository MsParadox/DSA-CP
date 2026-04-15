#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << (a[0] ^ a[1] ^ a[2]) - a[1] << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
