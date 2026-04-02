#include <bits/stdc++.h>
using namespace std;
int n, k, c, d;
typedef long long ll;
ll cal(vector<int> &a, int k)
{
    map<int, int> cnt;
    int l = 0, r = 0;
    ll res = 0;
    while (l <= r && r < n)
    {
        cnt[a[r]]++;
        while (cnt.size() > k && l <= r)
        {
            cnt[a[l]]--;
            if (!cnt[a[l]])
                cnt.erase(a[l]);
            l++;
        }
        int len = r - l + 1;
        res += max(0, min(d, len) - c + 1);
        r++;
    }
    return res;
}
void solve()
{
    cin >> n >> k >> c >> d;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = cal(a, k) - cal(a, k - 1);
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}