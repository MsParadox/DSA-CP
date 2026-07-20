#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, x, y, k, ans = 0;
    cin >> n >> x >> y >> k;
    ans += min(abs(x - y), min(n - x + y, n - y + x));
    if (n < 4)
    {
        cout << 1 << endl;
        return;
    }
    cout << ans + k << endl;
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