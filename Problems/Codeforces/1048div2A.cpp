#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a % b == 0 || b % a == 0)
        {
            cout << 1 << endl;
        }
        else
            cout << 2 << endl;
    }
}