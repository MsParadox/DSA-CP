#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    ll ans = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        ans += 1LL * (n / i) * (n / i);
    }
    ans += (n - n / 2);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}