#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll __lcm(ll a, ll b) { return a / __gcd(a, b) * b; }
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      cin >> v[i];
    ll lcm = 1;
    for (int i = 0; i < n - 1; i++)
    {
      if (v[i + 1] % v[i] == 0)
        continue;
      ll gcd = __gcd(v[i], v[i + 1]);
      lcm = __lcm(lcm, v[i] / gcd);
    }
    cout << lcm << endl;
  }
  return 0;
}
