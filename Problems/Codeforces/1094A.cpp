#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll x,y;
    cin >> x>>y;
    cout << (y>2*x? "YES":"NO") << endl;
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
