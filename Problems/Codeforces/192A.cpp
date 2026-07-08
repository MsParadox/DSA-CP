#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    if(n == 1 && arr[0] <3) {
        cout << "No" << endl;
        return;
    }

    cout << (arr[0] > 2 || (arr[0] > 1 && arr[1] > 1) ? "Yes" : "No") << endl;
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