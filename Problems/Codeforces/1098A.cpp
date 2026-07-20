#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, one = 0, two = 0, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
            ans++;
        if (x == 1)
            one++;
        if (x == 2)
            two++;
    }
    int p = min(one, two);
    ans += p;
    one -= p;
    two -= p;
    if (one > 0)
        ans += one / 3;
    else
        ans += two / 3;

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