#include <cstdio>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;
typedef long long ll;



struct Event {
    char kind;   
    int  l, r;
    ll   p;      
};

struct InputData {
    int          M;        
    ll           T;        
    vector<Event> events; 
};

struct Result {
    vector<ll> answers;      
    int        thresholdEvent; 
                               
};



const int MAXM = 1000006;   

struct Node {
    ll mn, mx, lazy;
} seg[4 * MAXM];


static void apply_node(int v, ll val) {
    seg[v].mn   += val;
    seg[v].mx   += val;
    seg[v].lazy += val;
}

static void push_down(int v) {
    if (seg[v].lazy) {
        apply_node(2*v,   seg[v].lazy);
        apply_node(2*v+1, seg[v].lazy);
        seg[v].lazy = 0;
    }
}

static void pull_up(int v) {
    seg[v].mn = min(seg[2*v].mn, seg[2*v+1].mn);
    seg[v].mx = max(seg[2*v].mx, seg[2*v+1].mx);
}


static void build(int v, int l, int r) {
    seg[v].mn = seg[v].mx = seg[v].lazy = 0;
    if (l == r) return;
    int m = (l + r) >> 1;
    build(2*v,   l,   m);
    build(2*v+1, m+1, r);
}


static void update(int v, int l, int r, int ql, int qr, ll val) {
    if (ql > r || qr < l) return;
    if (ql <= l && r <= qr) { apply_node(v, val); return; }
    push_down(v);
    int m = (l + r) >> 1;
    update(2*v,   l,   m, ql, qr, val);
    update(2*v+1, m+1, r, ql, qr, val);
    pull_up(v);
}


static ll query_min(int v, int l, int r, int ql, int qr) {
    if (ql > r || qr < l) return LLONG_MAX / 2;
    if (ql <= l && r <= qr) return seg[v].mn;
    push_down(v);
    int m = (l + r) >> 1;
    return min(query_min(2*v,   l,   m, ql, qr),
               query_min(2*v+1, m+1, r, ql, qr));
}



static bool parse_input(InputData &D) {
    int N;
    if (scanf("%d %d %lld", &D.M, &N, &D.T) != 3) return false;
    D.events.reserve(N);
    char buf[16];
    for (int i = 0; i < N; ++i) {
        scanf("%15s", buf);
        Event e;
        if (buf[0] == 'B') {             
            e.kind = 'B';
            scanf("%d %d %lld", &e.l, &e.r, &e.p);
        } else {                           
            e.kind = 'Q';
            scanf("%d %d", &e.l, &e.r);
            e.p = 0;
        }
        D.events.push_back(e);
    }
    return true;
}

static void format_output(const Result &res) {
    string out;
    for (ll a : res.answers) { out += to_string(a); out += '\n'; }
    out += to_string(res.thresholdEvent);
    out += '\n';
    fputs(out.c_str(), stdout);
}



static Result solve(const InputData &D) {
    Result res;
    res.thresholdEvent = -1;

    build(1, 1, D.M);

    for (int i = 0; i < (int)D.events.size(); ++i) {
        const Event &e = D.events[i];

        if (e.kind == 'B') {
        
            update(1, 1, D.M, e.l, e.r, e.p);

            
            if (res.thresholdEvent == -1 && seg[1].mx >= D.T)
                res.thresholdEvent = i + 1;   // 1-based

        } else {
        
            res.answers.push_back(query_min(1, 1, D.M, e.l, e.r));
        }
    }

    return res;
}


int main() {
    InputData D;
    if (!parse_input(D)) return 0;
    format_output(solve(D));
    return 0;
}