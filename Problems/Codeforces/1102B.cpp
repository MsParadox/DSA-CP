#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repb(i, a, b) for (ll i = a; i > b; i--)

using namespace std;

void print(vector<ll> a)
{
    for (auto i : a)
        cout << i << " ";
    cout << endl;
}

void input(vector<ll> &a, ll n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void solve()
{
    ll n;
    cin >> n;
    ll q = n / 12, r = n % 12;
    if (r != 10)
    {
        cout << r << " " << q * 12 << endl;
    }
    else
    {
        if (q >= 1)
        {
            cout << 22 << " " << (q - 1) * 12 << endl;
        }
        else
            cout << -1 << endl;
    }
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