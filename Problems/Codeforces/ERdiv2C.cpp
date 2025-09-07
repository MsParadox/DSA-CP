#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int x = max(2 * a[i], a[n - 1]) - a[i] - a[j];
                int k = upper_bound(a.begin(), a.begin() + j, x) - a.begin();

                ans += j - k;
            }
        }
        cout << ans << endl;
    }

    return 0;
}