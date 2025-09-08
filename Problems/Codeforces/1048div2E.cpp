#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> parent(n + 1, 0);
        vector<vector<int>> g(n + 1);
        for (int i = 2; i <= n; ++i) {
            int p; cin >> p;
            parent[i] = p;
            g[p].push_back(i);
        }

        // compute depth by BFS
        vector<int> depth(n + 1, 0);
        queue<int> q;
        depth[1] = 1;
        q.push(1);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int v : g[u]) {
                depth[v] = depth[u] + 1;
                q.push(v);
            }
        }

        // find leaves and min depth among leaves
        int minLeafDepth = INT_MAX;
        for (int i = 1; i <= n; ++i) {
            if (g[i].empty()) {
                minLeafDepth = min(minLeafDepth, depth[i]);
            }
        }
        if (minLeafDepth == INT_MAX) minLeafDepth = 0; // defensive (shouldn't happen for n>=2)

        // compute count of nodes at each depth 1..minLeafDepth
        vector<int> cnt(minLeafDepth + 1, 0); // cnt[d] for depth d
        for (int i = 1; i <= n; ++i) {
            if (depth[i] >= 1 && depth[i] <= minLeafDepth) ++cnt[depth[i]];
        }

        // collect sizes s_d for d=1..minLeafDepth
        vector<int> sizes;
        for (int d = 1; d <= minLeafDepth; ++d) sizes.push_back(cnt[d]);

        // if no available depths (minLeafDepth == 0) answer 0
        int L = (int)sizes.size();
        if (L == 0) {
            cout << 0 << '\n';
            continue;
        }

        sort(sizes.begin(), sizes.end()); // pick smallest sizes first for feasibility

        // subset-sum DP with bitset up to n (max sum of selected sizes <= n)
        const int MAXN = 1005; // safe bound for n <= 1000
        bitset<MAXN> bs; 
        bs.reset();
        bs[0] = 1;
        int prefixSum = 0;
        int answer = 0;
        for (int i = 0; i < L; ++i) {
            int s = sizes[i];
            prefixSum += s;
            // shift and OR
            bs = bs | (bs << s);

            // feasible x must satisfy:
            // lower = max(0, prefixSum - (n - k))   (so ones budget sufficient)
            // upper = min(k, prefixSum)             (zeros budget)
            int lower = max(0, prefixSum - (n - k));
            int upper = min(k, prefixSum);
            bool ok = false;
            if (lower <= upper) {
                for (int x = lower; x <= upper; ++x) {
                    if (bs[x]) { ok = true; break; }
                }
            }
            if (ok) answer = i + 1;
        }

        cout << answer << '\n';
    }
    return 0;
}
