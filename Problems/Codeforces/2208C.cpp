#include <bits/stdc++.h>
using namespace std;
void help(int i, vector<int> &c, vector<int> &p, double s, double curr, double &ans)
{ // cout<<s<<endl;
  int n = c.size();
  if (i >= n)
    return;
  help(i + 1, c, p, s, curr, ans);
  curr += c[i] * s;
  s -= (s * (p[i] / 100.0));
  ans = max(ans, curr);
  help(i + 1, c, p, s, curr, ans);
  return;
}
void solve()
{
  int n;
  double ans = 0;
  cin >> n;
  vector<int> c(n);
  vector<int> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> c[i] >> p[i];
  }
  help(0, c, p, 1, 0, ans);
  cout << ans << "\n";
}

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
