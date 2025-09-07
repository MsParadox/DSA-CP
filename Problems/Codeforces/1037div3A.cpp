#include <bits/stdc++.h>

// #define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        cin >> n;
        int ans = n % 10;
        while (n > 0)
        {
            ans = min(ans, n % 10);
            n /= 10;
        }
        cout << ans << endl;
    }

    return 0;
}