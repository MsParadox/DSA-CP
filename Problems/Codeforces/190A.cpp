#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    ll n, x, y;
    cin >> n >> x >> y;
    if (x * 3 <= y)
        cout << n * x << endl;
    else
    {
        ll ans = (n / 3) * y;
  
            if (n % 3 == 1)
                ans += (x < y ? x : y);
            else if (n % 3 == 2)
                ans += (2 * x < y ? 2 * x : y);
        
        cout << ans << endl;
    }
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
