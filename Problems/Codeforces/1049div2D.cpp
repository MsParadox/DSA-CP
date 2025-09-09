
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define vs vector<string> 
#define vb vector<bool> 
#define vi vector<int> 
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) (int)v.size()
#define endl '\n'

const int MOD = 1e9 + 7;
const long long INF = 4e18;

// Debug templates
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int x) { cerr << x; }
void _print(long long x) { cerr << x; }
void _print(string x) { cerr << x; }
void _print(char x) { cerr << x; }
void _print(double x) { cerr << x; }
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template <class T> void _print(vector<T> v) { cerr << "["; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set<T> s) { cerr << "["; for (T i : s) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map<T, V> m) { cerr << "["; for (auto i : m) { _print(i); cerr << " "; } cerr << "]"; }

// Function for modular exponentiation
ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate GCD
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function for Breadth-First Search (BFS)
void bfs(int start, const vector<vi>& adj, vi& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        // Process the node
        // Example: cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = 1;
                q.push(neighbor);
            }
        }
    }
}

// Function for Depth-First Search (DFS)
void dfs(int node, const vector<vi>& adj, vi& visited) {
    visited[node] = 1;
    // Process the node
    // Example: cout << node << " ";
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

// Prim's Algorithm for Minimum Spanning Tree
// ll prims(int n, const vector<vector<pii>>& adj) {
//     priority_queue<pii, vector<pii>, greater<pii>> pq;
//     vector<bool> visited(n + 1, false);
//     ll mst_cost = 0;

//     pq.push({0, 1}); // {weight, node}
//     while (!pq.empty()) {
//         auto [weight, node] = pq.top();
//         pq.pop();
//         if (visited[node]) continue;
//         visited[node] = true;
//         mst_cost += weight;
//         for (auto [neighbor, edge_weight] : adj[node]) {
//             if (!visited[neighbor]) {
//                 pq.push({edge_weight, neighbor});
//             }
//         }
//     }
//     return mst_cost;
// }

// Dijkstra's Algorithm for Shortest Path
// vector<ll> dijkstra(int n, int start, const vector<vector<pii>>& adj) {
//     vector<ll> dist(n + 1, INF);
//     priority_queue<pll, vector<pll>, greater<pll>> pq;

//     dist[start] = 0;
//     pq.push({0, start}); // {distance, node}
//     while (!pq.empty()) {
//         auto [d, node] = pq.top();
//         pq.pop();
//         if (d > dist[node]) continue;
//         for (auto [neighbor, weight] : adj[node]) {
//             if (dist[node] + weight < dist[neighbor]) {
//                 dist[neighbor] = dist[node] + weight;
//                 pq.push({dist[neighbor], neighbor});
//             }
//         }
//     }
//     return dist;
// }


// Custom hash function for std::pair<int, int>

// Kahn's Algorithm for Topological Sorting
vector<int> kahns(int n, const vector<vi>& adj) {
    vector<int> in_degree(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        for (int neighbor : adj[i]) {
            in_degree[neighbor]++;
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i) {
        if (in_degree[i] == 0) q.push(i);
    }

    vector<int> topo_order;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo_order.pb(node);
        for (int neighbor : adj[node]) {
            if (--in_degree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    if (sz(topo_order) != n) {
        // Graph has a cycle
        return {};
    }
    return topo_order;
}

// Function to solve a single test case
// void solve() {
//     // Write your solution logic here
//     // Example usage of mod_exp and gcd:
//     // ll result = mod_exp(2, 10, MOD);
//     // ll g = gcd(12, 18);
//     // Example usage of BFS and DFS:
//     // int n = 5; // Number of nodes
//     // vector<vi> adj(n + 1); // Adjacency list
//     // vi visited(n + 1, 0);
//     // bfs(1, adj, visited);
//     // fill(all(visited), 0); // Reset visited array
//     // dfs(1, adj, visited);
//     // Example usage of Prim's, Dijkstra's, and Kahn's algorithms:
//     // int n = 5; // Number of nodes
//     // vector<vector<pii>> adj(n + 1); // Adjacency list with weights for Prim's and Dijkstra's
//     // vector<vi> adj_list(n + 1); // Adjacency list for Kahn's
//     // ll mst_cost = prims(n, adj);
//     // vector<ll> shortest_paths = dijkstra(n, 1, adj);
//     // vector<int> topo_order = kahns(n, adj_list);/
    

// }



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<pair<i64,i64>> seg(n);
        for (int i = 0; i < n; ++i) cin >> seg[i].first >> seg[i].second;

        // base contribution: sum of original lengths
        i64 baseTotal = 0;
        for (auto &p : seg) baseTotal += (p.second - p.first);

        // prepare transformed values:
        // S = l + r (sort-key), and R = r (we'll need sums of these)
        vector<i64> S(n), R(n);
        for (int i = 0; i < n; ++i) {
            S[i] = seg[i].first + seg[i].second;
            R[i] = seg[i].second;
        }

        // create index order sorted by S ascending (stable relative tie-break not necessary)
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);
        sort(order.begin(), order.end(), [&](int a, int b){
            if (S[a] != S[b]) return S[a] < S[b];
            return R[a] < R[b]; // tie-break to keep determinism
        });

        // build sorted arrays S2 and R2 according to order
        vector<i64> S2(n), R2(n);
        for (int i = 0; i < n; ++i) {
            S2[i] = S[order[i]];
            R2[i] = R[order[i]];
        }

        // prefix sums for S2: prefS[k] = sum of S2[0..k-1], prefS[0]=0
        vector<i64> prefS(n+1, 0);
        for (int i = 0; i < n; ++i) prefS[i+1] = prefS[i] + S2[i];

        // total of R2
        i64 sumR = accumulate(R2.begin(), R2.end(), (i64)0);

        // compute best possible "added" value according to the logic
        i64 bestAdded = LLONG_MIN;
        if (n % 2 == 0) {
            int m = n / 2;
            // sum of m smallest S2 values = prefS[m]
            i64 smallSsum = prefS[m];
            bestAdded = sumR - smallSsum;
        } else {
            int m = (n - 1) / 2;
            // iterate which element is excluded (k)
            for (int k = 0; k < n; ++k) {
                i64 removedR = sumR - R2[k];
                i64 smallSsum = 0;
                if (m > 0) {
                    if (k < m) {
                        // when the removed index is among the first m elements,
                        // the m smallest among the remaining are S2[0..m] excluding S2[k]
                        smallSsum = prefS[m+1] - S2[k];
                    } else {
                        // removed index is after the first m => the m smallest remain S2[0..m-1]
                        smallSsum = prefS[m];
                    }
                }
                bestAdded = max(bestAdded, removedR - smallSsum);
            }
        }

        i64 extra = (bestAdded > 0 ? bestAdded : 0);
        cout << (baseTotal + extra) << '\n';
    }

    return 0;
}
