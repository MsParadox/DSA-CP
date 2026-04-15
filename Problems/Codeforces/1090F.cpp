#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int x, y;
    cin >> x >> y;
    if (x > y || (x == 0 && y % 2 == 0))
    {
        cout << "NO" << endl;
        return;
    }
    if ((x + y) % 2 == 1)
    {
        cout << "YES" << endl;
        int p = (x + y) / 2 + x;
        int i = 1;
        for (; i <= p; i++)
        {
            cout << i << " " << i + 1 << endl;
        }
        //cout << "mohit" << endl;
        for (int j = x + y - p - 1; j > 0; j--, i++)
        {
            cout << j << " " << i + 1 << endl;
        }
    }
    else
    {

        cout << "YES" << endl;
        int p = (x + y) / 2 +x-1;
        int i = 1;
        for (; i <= p; i++)
        {
            cout << i << " " << i + 1 << endl;
        }
        //cout << "mohit" << endl;
        for (int j = x + y - p - 1; j > 0; j--, i++)
        {
            cout << j+1 << " " << i + 1 << endl;
        }
    }
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
