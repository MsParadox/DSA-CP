#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n;
    cin >> n;

    for (ll i = 1; i < n; i++)
    {
        cout << (2 * i + 1) * (2 * i + 3) << " ";
    }
    cout << endl;
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
