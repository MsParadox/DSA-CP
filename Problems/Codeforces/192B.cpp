#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, a = 0, b = 0, c = 0;
    cin >> n;
    vector<int> arr(n);
    int f1 = -1, f2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            a++;
        if (arr[i] == 2)
            b++;
        if (arr[i] == 3)
            c++;
        if (f1 == -1 && a >= (b + c))
        {
            int j = i + 1;
            while (j < n && arr[j] == 3 && a >= (b + ++c))
                j++;

            a = 0, b = 0, c = 0;
            f1 = j - 1;
            i = j - 1;
            continue;
        }
        if (f1 != -1 && f2 == -1 && (a + b) >= c)
        {
            f2 = i;
            break;
        }
    }

    //cout << f1 << " " << f2 << endl;
    cout << ((f2 != -1 && f2 < n - 1) ? "Yes" : "No") << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}