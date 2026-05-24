#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int n;
    cin >> n;
    for (int i = 1; i <=n * 2; i += 2)
    {
        cout << i << " ";
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