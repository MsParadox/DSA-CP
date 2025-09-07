#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (abs(arr[0] - arr[1]) <= 1 || abs(arr[n - 1] - arr[n - 2]) <= 1)
        {
            cout << 0 << endl;
            continue;
        }
        bool in = true, de = true, hai = false, ans = false;
        if (arr[0] > arr[1])
        {
            in = false;
        }
        if (arr[0] < arr[1])
        {
            de = false;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) <= 1)
            {
                ans = true;
                break;
            }
            if ((arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) || (arr[i] < arr[i + 1] && arr[i] < arr[i - 1]))
            {
                {
                    hai = true;
                }
            }
            if (arr[i] > arr[i + 1])
            {
                in = false;
            }
            if (arr[i] < arr[i + 1])
            {
                de = false;
            }
        }
        if (arr[n - 2] > arr[n - 1])
        {
            in = false;
        }
        if (arr[n - 2] < arr[n - 1])
        {
            de = false;
        }

        if (ans)
        {
            cout << 0 << endl;
            continue;
        }
        if (hai)
        {
            cout << 1 << endl;
            continue;
        }
        if (in || de)
        {
            cout << -1 << endl;
            continue;
        }
    }

    return 0;
}