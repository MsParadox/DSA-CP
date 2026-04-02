#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

void solve()
{
    ll x, y, z, m;
    cin >> x >> y >> z >> m;

    ll a = m / x, b = m / y, c = m / z, ab = m / lcm(x, y), bc = m / lcm(y, z), ca = m / lcm(x, z), abc = m / lcm(lcm(x, y), z);
    cout << (2 * abc - 3 * ab - 3 * ca + 6 * a) << " " << (2 * abc - 3 * ab - 3 * bc + 6 * b) << " " << (2 * abc - 3 * ca - 3 * bc + 6 * c) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
