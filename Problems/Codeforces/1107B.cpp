#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int x, y = 1;
    cin >> x;

    int n = to_string(x).length();
    while (n--)
    {
        y *= 10;
    }
    cout << y + 1 << endl;
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