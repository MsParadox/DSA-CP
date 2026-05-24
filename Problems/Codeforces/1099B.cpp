#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve()
{

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll k = 0;
    for (int i = 1; i < n; i++)
    {
        k = max(k, v[i - 1] - v[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        
        v[i] += k;

        if (v[i] < v[i - 1])
            return "NO";
    }
    return "YES";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        cout << solve() << endl;
    }

    return 0;
}