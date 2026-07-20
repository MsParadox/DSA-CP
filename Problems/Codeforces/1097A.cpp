#include <bits/stdc++.h>

using namespace std;
void solve()
{

    int n, ans = 0;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (a[n - 1] > 0)
        ans++;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] > 0)
        {
            a[i] += a[i + 1];
        }
        if (a[i] > 0)
            ans++;
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