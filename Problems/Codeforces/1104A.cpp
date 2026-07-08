#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    int mn = INT_MAX,ans=0;
    cin >> n;
    for (int i = 0; i <n; i++)
    {int x;
        cin>> x;
        mn = min(mn,x);
        ans += mn;
    }
    
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}