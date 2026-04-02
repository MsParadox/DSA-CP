#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<long long> a(N);
        for (int i = 0; i < N; i++)
            cin >> a[i];

        unordered_map<long long, long long> g;

        for (long long x : a)
        {
            for (long long d = 1; d * d <= x; d++)
            {
                if (x % d == 0)
                {
                    long long d1 = d, d2 = x / d;

                    if (!g.count(d1))
                        g[d1] = x;
                    else
                        g[d1] = __gcd(g[d1], x);

                    if (d1 != d2)
                    {
                        if (!g.count(d2))
                            g[d2] = x;
                        else
                            g[d2] = __gcd(g[d2], x);
                    }
                }
            }
        }

        int Q;
        cin >> Q;
        while (Q--)
        {
            long long K;
            cin >> K;
            if (g.count(K) && g[K] == K)
                cout << "Y\n";
            else
                cout << "N\n";
        }
    }
    return 0;
}
