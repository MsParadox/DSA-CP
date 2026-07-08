#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, c, ans = 0;
    cin >> n >> c;
    bool f = false;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            f = true;
            break;
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout << -1 << endl;
            return;
        }
        ans += a[i] - b[i];
    }

    cout << (f ? ans + c : ans) << endl;
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