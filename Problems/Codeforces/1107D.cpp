#include <bits/stdc++.h>
#define ll long long

using namespace std;
void solve()
{
    int n;
    ll k = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == 0 && (a[i] + k) > b[i])
        {
            cout << "No" << endl;
            return;
        }

        if ((a[i] + k) <= b[i])
        {
            k = 0;
            continue;
        }

        k += (a[i] - b[i]);
    }

    cout << "Yes" << endl;
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