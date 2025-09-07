#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, s;
    cin >> n >> s;
    int ans = 0;

    while (n--)
    {
      int d1, d2, x, y;
      cin >> d1 >> d2 >> x >> y;
      if (x == y && d1 == d2)
        ans++;
      if (x + y == s && (d1 * d2 < 0))
        ans++;
    }
    cout << ans << endl;
  }
  return 0;
}
