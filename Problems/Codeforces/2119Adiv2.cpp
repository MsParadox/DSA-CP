#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a == b)
    {
      cout << 0 << endl;
      continue;
    }

    if (a > b)
    {
      if (a % 2 == 1 and a - b == 1)
        cout << y << endl;
      else
        cout << -1 << endl;
    }
    else
    {
      int ans = 0;
      while (a < b)
      {
        if (a % 2 == 0)
          ans += min(x, y);
        else
          ans += x;
        a++;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
