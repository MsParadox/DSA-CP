#include <bits/stdc++.h>
using namespace std;

long long help(vector<int> &a)
{
    if (a.size() == 0)
        return 0;
    int n = a.size();
    int mid = n / 2;
    long long shift = a[mid] - mid;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - i - shift);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a, b;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                a.push_back(i);
            }
            else
            {
                b.push_back(i);
            }
        }

        cout << min(help(a), help(b)) << endl;
    }

    return 0;
}
