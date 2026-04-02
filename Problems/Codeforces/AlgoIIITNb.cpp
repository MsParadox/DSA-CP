#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void solve()
{

    long long n, l, r;
    if (!(cin >> n >> l >> r))
        return;

    long long x_max = n / 2;

    long long R = min(r, x_max);

    if (n < 4)
    {
        cout << "-1" << endl;
        return;
    }

    long long x_min;

    if (n % 2 == 0)
    {

        x_min = 2;
    }
    else
    {

        x_min = 3;
    }

    long long L = max(l, x_min);

    if (L > R)
    {
        cout << "-1" << endl;
    }
    else
    {

        cout << L << " " << R << endl;
    }
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t))
        return 0;

    while (t--)
    {
        solve();
    }

    return 0;
}