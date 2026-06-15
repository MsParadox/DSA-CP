#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n, k;
    cin >> n>>k;

    string s;
    cin >> s;
    s=" "+s;
    for (int i = 1; i <=n-k; i++)
    {
        if (s[i] == '1')
        {
            s[i] = '0';

            if (s[i + k ] == '0')
                s[i + k ] = '1';
            else
                s[i + k ] = '0';
        }
    }

    cout << ((count(s.begin(), s.end(), '0') == n) ? "YES" : "NO") << endl;
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