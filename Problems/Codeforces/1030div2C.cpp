#include <bits/stdc++.h>
#include <cmath>
#define ll long long
using namespace std;
bool is(ll x)
{
    return (x && !(x & (x - 1)));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, ans = 0;

        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            ans += __builtin_popcountll(v[i]);
        }

        for (int i = 0; i <= 60; i++)
        {
            ll bits = (1LL << i);
            for (auto e : v)
            {
                if (!(e & bits) && k >= bits)
                {
                    ans++;
                    k -= bits;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}