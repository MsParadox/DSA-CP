#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> position(n + 1), transformed(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            int value;
            cin >> value;
            position[value] = i;
        }

        for (int i = 1; i <= n; ++i)
        {
            cin >> transformed[i];
            transformed[i] = position[transformed[i]];
        }

        bool sorted = true;
        for (int i = 2; i <= n; ++i)
        {
            if (transformed[i] < transformed[i - 1])
            {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES\n" : "NO\n");
    }

    return 0;
}