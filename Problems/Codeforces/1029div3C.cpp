#include <bits/stdc++.h>

// #define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;

        cin >> n;
        vector<int> v(n);
        //unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        set<int> s;
        set<int> temp;
        for (int i = 0; i < n; i++)
        {

            s.insert(v[i]);
            temp.insert(v[i]);

            if (temp == s)
            {
                ans++;
                temp.clear();
            }
        
    }
    cout<<ans << endl;
}

return 0;
}