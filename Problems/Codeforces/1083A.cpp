#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin >> n;
  
  vector<int> c(n);
  for (int i = 0; i < n; i++)
  {
    cin >> c[i];
    if(c[i]==n) swap(c[i],c[0]);
  }
  
for(int i=0;i<n;i++){
  cout<<c[i]<<" ";
}
cout<<endl;
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
