#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, c;
		cin >> n >> c;
		ll ans = n;
		vector<ll> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for (int i = n - 1; i >= 0; i--)
		{
			if (v[i] <= c)
			{
				ans--;
				c /= 2;
			}
		}
		cout << ans << endl;
	}

	return 0;
}