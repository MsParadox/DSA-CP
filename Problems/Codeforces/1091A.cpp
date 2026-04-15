#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int n,k,sum=0;
    cin >> n>>k;

    for (int i = 0; i < n; i++)
    {int x;
        cin>>x;
        sum+=x;
    }
    cout << ((sum%2==1 ||(n*k)%2==0)? "YES":"NO") << endl;
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
