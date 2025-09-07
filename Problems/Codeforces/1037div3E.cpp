#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (a[n-1]!=b[0]) {
        cout << "NO" << endl;
        return;
    }
    int g=a[n-1];
    for(int i=0;i<n;i++){
        bool f1=(__gcd(a[i],b[i])==g);
        bool f2=(i==0||a[i-1]%a[i]==0);
        bool f3=(i+1>=n ||b[i+1]%b[i]==0);
        bool f4=(i+1>=n||__gcd(a[i],b[i+1])==g);
        if (!(f1 && f2 && f3 && f4)) {
            cout << "NO" << endl;
            return;
        }
    }
     cout << "YES" << endl;
        return;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}