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
        vector<int> v(n);

        int l = 0;
        int r = n - 1;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                v[l] = i;
                l++;
            }
            else
            {
                v[r] = i;
                r--;
            }
        }
        for (auto e : v)
        {
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}