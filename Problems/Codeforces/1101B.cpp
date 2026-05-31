#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin >> n;

  vector<ll> v(n);

  for (auto &x : v)
    cin >> x;
  ll prev = v[0], sum = v[0];
  cout << v[0] << " ";
  for (int i = 1; i < n; i++)
  {
    sum += v[i];
    prev = min(prev, sum / (i + 1));
    cout << prev << " ";
  }
  cout << endl;
}

int main()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    solve();
  }
  return 0;
}
