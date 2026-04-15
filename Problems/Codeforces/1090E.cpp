#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ans=max(ans,a[i]^a[j]);
        }
    }

    cout<<ans<<endl;
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
