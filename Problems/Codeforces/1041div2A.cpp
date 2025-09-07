#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
              
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = false;
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                flag = true;
            if (a[i] != -1)
                b.push_back(a[i]);
        }
        if (flag)
        {
            cout << "No" << endl;
            continue;
        }
        for (int i = 1; i < b.size(); i++)
        {

            if (b[i] != b[i - 1])
            {
                flag = true;
                break;
            }
        }
        cout << (!flag ? "Yes" : "No") << endl;
    }

    return 0;
}