#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        unordered_set<int> s;
        int keq = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < k)
            {

                s.insert(v[i]);
            }
            if (v[i] == k)
                keq++;
        }
        int sz = s.size();
        cout << max(k - sz, keq) << endl;
    }

    return 0;
}
