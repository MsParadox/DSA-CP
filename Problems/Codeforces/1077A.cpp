#include <bits/stdc++.h>

using namespace std;
void solve()
{

    int n;
    cin >> n;
    vector<int> a(n);
    int p = n;
    for (int i = n - 1; i >= 0; i -= 2)
    {
        a[i] = p;
        p--;
    }
    p = 1;
    for (int i = n - 2; i >= 0; i -= 2)
    {
        a[i] = p;
        p++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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
