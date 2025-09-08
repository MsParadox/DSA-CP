#include <bits/stdc++.h>
using namespace std;
using u64 = unsigned long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> children(n + 1);
        for (int i = 2; i <= n; ++i) {
            int p; cin >> p;
            children[p].push_back(i);
        }

        // compute depth by iterative stack (avoid recursion depth issues)
        vector<int> depth(n + 1, 0);
        vector<int> stk;
        stk.reserve(n);
        stk.push_back(1);
        depth[1] = 1;
        for (size_t i = 0; i < stk.size(); ++i) {
            int u = stk[i];
            for (int v : children[u]) {
                depth[v] = depth[u] + 1;
                stk.push_back(v);
            }
        }

        // find minimal leaf depth D
        int D = INT_MAX;
        for (int i = 1; i <= n; ++i) {
            if (children[i].empty()) D = min(D, depth[i]);
        }
        if (D == INT_MAX) D = 0; // should not happen for n>=2

        if (D == 0) {
            cout << 0 << '\n';
            continue;
        }

        // count nodes at each depth 1..D
        vector<int> cnt(D + 1, 0);
        for (int i = 1; i <= n; ++i) {
            if (depth[i] >= 1 && depth[i] <= D) ++cnt[depth[i]];
        }

        // collect sizes s_d
        vector<int> sizes;
        sizes.reserve(D);
        for (int d = 1; d <= D; ++d) sizes.push_back(cnt[d]);
        sort(sizes.begin(), sizes.end());

        // Prepare manual bitset: length = n+1 bits (possible sum from 0..n)
        int bits = n + 1;
        int W = (bits + 63) >> 6; // number of 64-bit words
        vector<u64> words(W, 0ULL), shifted(W, 0ULL);

        // Initially only sum 0 is achievable
        words[0] = 1ULL;

        int prefixSum = 0;
        int answer = 0;

        // helper lambda: check if any bit in [L,R] is set in 'words'
        auto any_in_range = [&](int L, int R)->bool {
            if (L > R) return false;
            if (L < 0) L = 0;
            if (R > n) R = n;
            int lw = L >> 6, rw = R >> 6;
            int lb = L & 63, rb = R & 63;
            if (lw == rw) {
                u64 mask;
                if (rb - lb == 63) mask = ~0ULL;
                else mask = (((1ULL << (rb - lb + 1)) - 1ULL) << lb);
                return (words[lw] & mask) != 0ULL;
            }
            // left partial
            if (lb != 0) {
                u64 mask = (~0ULL) << lb;
                if ((words[lw] & mask) != 0ULL) return true;
                ++lw;
            }
            // middle full words
            for (int w = lw; w < rw; ++w) if (words[w]) return true;
            // right partial
            if (rb != 63) {
                u64 mask = (1ULL << (rb + 1)) - 1ULL;
                if ((words[rw] & mask) != 0ULL) return true;
            } else {
                if (words[rw]) return true;
            }
            return false;
        };

        // iterate sizes, update bitset and check feasibility
        for (int i = 0; i < (int)sizes.size(); ++i) {
            int s = sizes[i];
            prefixSum += s;
            // compute shifted = words << s then OR into words
            // shift by whole words and remainder
            int whole = s >> 6;
            int part = s & 63;

            // clear shifted
            std::fill(shifted.begin(), shifted.end(), 0ULL);

            if (part == 0) {
                // simpler: shifted[w + whole] |= words[w]
                for (int w = 0; w < W; ++w) {
                    int dst = w + whole;
                    if (dst >= W) break;
                    shifted[dst] |= words[w];
                }
            } else {
                // general case: need to split across words
                for (int w = 0; w < W; ++w) {
                    u64 val = words[w];
                    if (!val) continue;
                    int base = w + whole;
                    if (base < W) {
                        shifted[base] |= (val << part);
                    }
                    if (base + 1 < W) {
                        shifted[base + 1] |= (val >> (64 - part));
                    }
                }
            }
            // OR shifted back to words
            for (int w = 0; w < W; ++w) words[w] |= shifted[w];

            // compute feasible zero range [low, high]
            int low = prefixSum - (n - k);
            if (low < 0) low = 0;
            int high = prefixSum;
            if (high > k) high = k;
            if (low <= high) {
                if (any_in_range(low, high)) answer = i + 1;
            }
        }

        cout << answer << '\n';
    }
    return 0;
}
