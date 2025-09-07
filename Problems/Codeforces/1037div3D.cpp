#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = k;
        vector<pair<int, pair<int, int>>> v;

        for (int i = 0; i < n; i++)
        {
            int l, r, real;
            cin >> l >> r >> real;
            v.push_back({l, {r, real}});
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (k >= v[i].first && k < v[i].second.second)
            {
                ans = max(ans, v[i].second.second);
                k = ans;
            }
        }
        cout << ans << endl;
    }

    return 0;
}