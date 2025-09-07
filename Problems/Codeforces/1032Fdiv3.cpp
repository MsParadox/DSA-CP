#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
ll ps[200005];
int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    ll n, s, x;
    cin >> n >> s >> x;
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      ps[i] = ps[i - 1] + a[i];
    }
    int left = 1;
    map<ll, int> m;
    ll ans = 0;
    for (int r = 1; r <= n; r++)
    {
      if (a[r] > x)
      {
        m.clear();
        left = r + 1;
      }
      else if (a[r] == x)
      {
        while (left <= r)
        {
          m[ps[left - 1]]++;
          left++;
        }
      }
      ans += m[ps[r] - s];
    }
    cout << ans << endl;
  }
  return 0;
}
