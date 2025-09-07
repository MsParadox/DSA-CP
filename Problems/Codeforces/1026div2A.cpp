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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        int i = 0;
        int j = n - 1;
        while (i <j)
        {
            if ((v[i] + v[j]) % 2 == 0)
                break;
            if ((v[i] + v[j - 1]) % 2 == 0)
            {
                ans++;
                j--;
            }
            else if ((v[i + 1] + v[j]) % 2 == 0)
            {
                ans++;
                i++;
            }
            else
            {
                ans++;
                i++;
                j--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
