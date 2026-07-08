#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int a, b, x, ans = 0;
    cin >> a >> b >> x;
    ans = abs(a - b);
    int i = 0;
    while (a != b)
    {
        if (b > a)
        {
            swap(a, b);
        }

        ans = min(ans, abs(a - b) + i);
        a /= x;
        i++;
    }

    ans = min(ans, i);
    cout << ans << endl;
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