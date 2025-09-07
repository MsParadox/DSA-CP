#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << 2 * n - 3 << endl;
        cout << 1 << " " << 1 << " " << n << endl;

        cout << 2 << " " << 1 << " " << n - 1 << endl;
        cout << n << " " << 2 << " " << n << endl;

        for (int i = 3; i <= n - 1; i++)
        {
            cout << i << " " << 1 << " " << n - i + 1 << endl;
            cout << i << " " << n - i + 2 << " " << n << endl;
        }
    }

    return 0;
}