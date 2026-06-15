#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int n;

    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] % a[i + 1] != a[i + 2])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << a[0] << " " << a[1] << endl;
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
