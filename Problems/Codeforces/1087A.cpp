#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  ll n, c, k;
  cin >> n >> c >> k;
  vector<ll> v(n);
  ll ans = c;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
    pq.push(v[i]);
  }

  if (pq.top() > c)
  {
    cout << c << endl;
    return;
  }
  while (!pq.empty())
  {
    ll curr = pq.top();
    pq.pop();
    // cout<<curr<<" "<<c<<" "<<k<<endl;
    if (curr > c)
    {
      break;
    }
    ans += curr;
    if (k > 0)
    {
      ans += min(k, (c - curr));
      k -= (c - curr);
    }
    c = ans;
  }
  cout << c << endl;
  // cout<<endl;
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
