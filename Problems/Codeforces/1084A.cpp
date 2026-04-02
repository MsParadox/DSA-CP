#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  if(n%2==1) {
    cout<<"NO"<<endl;
    return;
  }
  stack<char> st;
  for (int i = 0; i < n; i++)
  {
    if (!st.empty() && s[i] == st.top())
    
      st.pop();
    
    else
    
      st.push(s[i]);
    
  }

  cout << (st.size() == 0 ? "YES" : "NO") << endl;
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
