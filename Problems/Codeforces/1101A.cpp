#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> vec(n);
  for (auto& x: vec) cin >> x;

  sort(vec.begin(), vec.end());

  int i = 0, j = n - 1;
  int ans = 0;

  while (i < j) {
    if (vec[i] == vec[j]) {
      break;
    }
    ans = ans + 1;
    i = i + 1;
    j = j - 1; 
  }

  cout << ans << endl;
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
