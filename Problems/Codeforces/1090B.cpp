#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{

    vector<int> a(7);
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<6;i++)
    
        
        ans+=a[i];
            
        cout<<-1*ans+a[6]<<endl;
        
    
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
