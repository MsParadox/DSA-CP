#include <bits/stdc++.h>

// #define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n >> m;
        cout << ((n == 1 || m == 1 || (m == 2 && n == 2)) ? "No" : "Yes") << endl;
    }

    return 0;
}