#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <tuple>
#include <limits>

using namespace std;





struct SegMin {
    int n;
    int INF;
    vector<int> st;
    SegMin(int n_ = 0, int INF_ = 0) { init(n_, INF_); }
    void init(int n_, int INF_) {
        n = n_;
        INF = INF_;
        st.assign(4 * max(1, n), INF);
    }
    // point set (we only set once per index, but keep min to be safe)
    void update_point(int v, int tl, int tr, int pos, int val) {
        if (tl == tr) {
            st[v] = min(st[v], val);
            return;
        }
        int tm = (tl + tr) >> 1;
        if (pos <= tm) update_point(v<<1, tl, tm, pos, val);
        else update_point(v<<1|1, tm+1, tr, pos, val);
        st[v] = min(st[v<<1], st[v<<1|1]);
    }
    void update_point(int pos, int val) { update_point(1, 1, n, pos, val); }

    int query_min(int v, int tl, int tr, int l, int r) {
        if (l > r) return INF;
        if (l <= tl && tr <= r) return st[v];
        int tm = (tl + tr) >> 1;
        int left = query_min(v<<1, tl, tm, l, min(r, tm));
        int right = query_min(v<<1|1, tm+1, tr, max(l, tm+1), r);
        return min(left, right);
    }
    int query_min(int l, int r) { return query_min(1, 1, n, l, r); }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
#if 0
    // Example usage (comment out if not needed)
#endif

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];

        // Compute L: previous index with a[prev] > a[i]
        vector<int> L(n+1, 0), R(n+1, n+1);
        {
            vector<int> st; st.reserve(n);
            for (int i = 1; i <= n; ++i) {
                while (!st.empty() && a[st.back()] <= a[i]) st.pop_back();
                L[i] = st.empty() ? 0 : st.back();
                st.push_back(i);
            }
        }
        // Compute R: next index with a[next] < a[i]
        {
            vector<int> st; st.reserve(n);
            for (int i = n; i >= 1; --i) {
                while (!st.empty() && a[st.back()] >= a[i]) st.pop_back();
                R[i] = st.empty() ? n+1 : st.back();
                st.push_back(i);
            }
        }

        // Prepare indices sorted by L descending (so we can activate when L >= current_l)
        vector<pair<int,int>> byL; byL.reserve(n);
        for (int i = 1; i <= n; ++i) byL.emplace_back(L[i], i);
        sort(byL.begin(), byL.end(), [](const pair<int,int>& x, const pair<int,int>& y){
            return x.first > y.first; // descending by L
        });

        // Read queries, keep original order, sort by l descending
        struct Query { int l, r, idx; };
        vector<Query> qs; qs.reserve(q);
        for (int i = 0; i < q; ++i) {
            int l, r; cin >> l >> r;
            qs.push_back({l, r, i});
        }
        sort(qs.begin(), qs.end(), [](const Query& A, const Query& B){
            return A.l > B.l; // descending by l
        });

        const int INF = n + 1;
        SegMin seg(n, INF);

        vector<string> ans(q);
        int ptr = 0; // pointer into byL
        for (const auto &qq : qs) {
            int l = qq.l, r = qq.r, qi = qq.idx;
            // activate all indices with L >= l
            while (ptr < (int)byL.size() && byL[ptr].first >= l) {
                int idx = byL[ptr].second;
                // store R[idx] at position idx
                seg.update_point(idx, R[idx]);
                ++ptr;
            }
            // trivial short-circuit: any segment of length < 3 is always perfect
            if (r - l + 1 < 3) {
                ans[qi] = "YES";
                continue;
            }
            int bestR = seg.query_min(l, r);
            ans[qi] = (bestR <= r) ? "NO" : "YES";
        }

        // print answers in input order
        for (int i = 0; i < q; ++i) cout << ans[i] << '\n';
    }
    return 0;
}
