#include <bits/stdc++.h>
#define ll long long
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n != 0){
        sum += (n % 10);
        n = n / 10;
    }
    return sum;
}
 
void solve() {
    int x;
    cin >> x;
    int count = 0;
    for(int i = x; i <= x + 90; i++){
        int sum = digitSum(i);
        if(i - sum == x)
            count++;
    }
    cout << count << "\n";
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
