#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
    int n;
    ll ans = 0;
    cin >> n;

    vector<ll> a(n);
    vector<bool> s(n + 2, false);

    for (int i = 0; i < n; i++)
        cin >> a[i];
        
    sort(a.begin(), a.end());

    ans += a[n - 1] * n;
    
    vector<ll> optimal_order;
    vector<ll> duplicates;
    ll expected = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == expected) {
            optimal_order.push_back(a[i]);
            expected++;
        } else {
            duplicates.push_back(a[i]);
        }
    }
    
    optimal_order.insert(optimal_order.end(), duplicates.begin(), duplicates.end());

    if (a[n - 1] <= n + 1) s[a[n - 1]] = true; 
    
    ll k = 0;
    if (a[n - 1] == 0)
    {
        k = 1;
        ans += k;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (optimal_order[i] <= n + 1) s[optimal_order[i]] = true; 
        
        while (s[k])
        {
            k++;
        }

        ans += k;
    }

    cout << ans << "\n"; 
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
