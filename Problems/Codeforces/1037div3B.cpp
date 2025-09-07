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
        int ans = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v[0]) ans++;
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                ans++;
            }
        }
        
     
        cout << ans << endl;
    }

    return 0;
}