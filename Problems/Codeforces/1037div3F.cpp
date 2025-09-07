//TLE test 3 (int -> long long)
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, q, ans = 0;
    cin >> n >> q;
    vector<int> a(n + 1);
    unordered_map<int, int> mp;
    vector<vector<int>> b(n + 1);
    map<pair<int, int>, int> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[i] = a[i];
    }

    for (int i = 1; i <= n - 1; i++)
    {
        int j, k, l;
        cin >> j >> k >> l;
        p[{j, k}] = l;

        p[{k, j}] = l;
        b[j].push_back(k);
        b[k].push_back(j);
        if (mp[j] != mp[k])
            ans += l;
    }

    for (int i = 1; i <= q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (mp[x] == y)
        {
            cout << ans << endl;
            continue;
        }
        int prev = mp[x];
        mp[x] = y;
        for (int j = 0; j < b[x].size(); j++)
        {
            if (prev == mp[b[x][j]])
            {
                ans += p[{x, b[x][j]}];
            }
            if (mp[x] == mp[b[x][j]])
            {
                ans -= p[{x, b[x][j]}];
            }
        }
        cout<< ans << endl;
    }
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
// 4
// 1 1
// 1
// 1 1
// 2 3
// 1 1
// 1 2 10
// 1 2
// 2 2
// 1 1
// 5 4
// 1 2 1 2 3
// 1 2 5
// 2 3 3
// 2 4 4
// 4 5 7
// 3 2
// 5 2
// 1 2
// 2 3
// 4 3
// 1 1 2 2
// 1 2 2
// 2 3 6
// 2 4 8
// 3 1
// 4 1
// 2 2
