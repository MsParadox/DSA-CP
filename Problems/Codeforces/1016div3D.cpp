#include <bits/stdc++.h>

using namespace std;
using ll = long long;

using pll = pair<ll, ll>;

ll f(ll top, ll left, ll y, ll x, ll n, ll cur)
{
	if (n == 0)
		return cur;
	ll half = 1ll << (n - 1);
	ll sq = half * half;
	if (y < top + half && x < left + half)
		return f(top, left, y, x, n - 1, cur);
	else if (y >= top + half && x >= left + half)
		return f(top + half, left + half, y, x, n - 1, cur + sq);
	else if (y >= top + half && x < left + half)
		return f(top + half, left, y, x, n - 1, cur + sq * 2);
	else
		return f(top, left + half, y, x, n - 1, cur + sq * 3);
}

pll g(ll top, ll left, ll k, ll n, ll cur)
{
	if (n == 0)
		return { top, left };
	ll half = 1ll << (n - 1);
	ll sq = half * half;
	if (cur + sq > k)
		return g(top, left, k, n - 1, cur);
	else if (cur + sq * 2 > k)
		return g(top + half, left + half, k, n - 1, cur + sq);
	else if (cur + sq * 3 > k)
		return g(top + half, left, k, n - 1, cur + sq * 2);
	else
		return g(top, left + half, k, n - 1, cur + sq * 3);
}

void solve()
{
	ll i, j;
	ll n, q;
	cin >> n >> q;
	while (q--)
	{
		string s;
		cin >> s;
		if (s == "->")
		{
			ll x, y;
			cin >> x >> y;
			cout << f(1, 1, x, y, n, 1) << '\n';
		}
		else
		{
			ll d;
			cin >> d;
			auto r = g(1, 1, d, n, 1);
			cout << r.first << ' ' << r.second << '\n';
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--)
		solve();
}