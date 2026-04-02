#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  for (int i = 0; i < n - 1; i++)
  {
    int mn = 0, mx = 0;
    for (int j = i + 1; j < n; j++)
    {
      if (v[j] > v[i])
        mx++;
      if (v[j] < v[i])
        mn++;
    }
    v[i] = max(mn, mx);
  }
  v[n - 1] = 0;
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
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
