#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll d(int a, int b, int p, int q)
{
  return pow(a - p, 2) + pow(b - q, 2);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a, b, p, q;
    cin >> a >> b >> p >> q;
    ll di = d(a, b, p, q);
    ll mx = INT_MIN;
    vector<int> v(n);
    ll dis = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
      dis += v[i];
      mx = max((ll)v[i], mx);
    }
    ll l = max((ll)0, mx - (dis - mx));
    if (l * l <= di && dis<=di * di )
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
