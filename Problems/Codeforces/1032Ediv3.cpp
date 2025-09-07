#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string left, right;
    cin >> left >> right;

    int n = left.length();
    if (left == right)
    {
      cout << 2 * n << endl;
      continue;
    }
    int pos = 0;
    int ans = 0;

    while (pos < n)
    {
      if (left[pos] == right[pos])
      {
        pos++;
      }
      else
        break;
    }
    ans += 2 * pos;
    if (left[pos] + 1 < right[pos])
    {
      cout << ans << endl;
      continue;
    }
    else
    {
      ans++;
      for (int i = pos + 1; i < n; i++)
      {
        if (left[i] == '9' && right[i] == '0')
          ans++;
          else break;
      }
      cout << ans << endl;
    }
  }
  return 0;
}
