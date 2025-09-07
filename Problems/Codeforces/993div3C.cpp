
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, a, b, c;
		cin >> m >> a >> b >> c;
		int n = m;
		int p = min(m, a);
		m -= p;
		int q = min(n, b);
		n -= q;
		int r = min(c, m + n);
		cout << p + q + r << endl;
	}

	return 0;
}