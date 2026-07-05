#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int x, y;
    cin >> x >> y;

    cout << (x % y == 0 ? "YES" : "NO") << endl;
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