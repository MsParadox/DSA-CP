#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n, k, p, m;
  cin >> n >> k >> p >> m;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  priority_queue<int, vector<int>, greater<>> heap;
  queue<int> queue;
  for (int i = 1; i <= k; i++)
  {
    if (i != p)
    {
      heap.push(a[i]);
    }
    else
    {
      heap.push(0);
    }
  }
  for (int i = k + 1; i <= n; i++)
  {
    if (i != p)
    {
      queue.push(a[i]);
    }
    else
    {
      queue.push(0);
    }
  }
  int ans = 0;
  while (true)
  {
    int curMin = heap.top();
    // cout << curMin << "\n";
    heap.pop();
    if (curMin == 0)
    {
      if (m >= a[p])
      {
        m -= a[p];
        ans++;
        queue.push(0);
      }
      else
      {
        break;
      }
    }
    else
    {
      if (m >= curMin)
      {
        m -= curMin;
        queue.push(curMin);
      }
      else
      {
        break;
      }
    }
    heap.push(queue.front());
    queue.pop();
  }
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
