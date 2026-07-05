#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct BIT {
    int n;
    vector<int> t;

    explicit BIT(int n) : n(n), t(n + 1, 0) {}

    void update(int i, int d) {
        for (; i <= n; i += i & -i) t[i] += d;
    }

  
    int kth(int k) const {
        int pos = 0;
   
        for (int pw = (1 << 18); pw; pw >>= 1) {
            if (pos + pw <= n && t[pos + pw] < k) {
                pos += pw;
                k -= t[pos];
            }
        }
        return pos + 1;
    }
};



struct InputData {
    int N;
    vector<long long> times;   
    vector<long long> fares;   
};

static bool parse_input(InputData &D) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if (!(cin >> D.N)) return false;
    D.times.assign(D.N, 0);
    D.fares.assign(D.N, 0);
    for (int i = 0; i < D.N; ++i) cin >> D.times[i] >> D.fares[i];
    return true;
}

static void format_output(const vector<int> &flags) {
    // One 0/1 flag per ride, one per line.
    for (int f : flags) cout << f << "\n";
}


static vector<int> solve(const InputData &D) {
    int n = D.N;


    vector<long long> cf = D.fares;
    sort(cf.begin(), cf.end());
    cf.erase(unique(cf.begin(), cf.end()), cf.end());
    int M = (int)cf.size();


    auto rank_of = [&](long long f) -> int {
        return (int)(lower_bound(cf.begin(), cf.end(), f) - cf.begin()) + 1;
    };


    BIT bit(M);
    vector<int> flags(n, 0);
    int lo = 0;   

    for (int i = 0; i < n; ++i) {
        
        bit.update(rank_of(D.fares[i]), +1);

  
        while (D.times[lo] <= D.times[i] - 300) {
            bit.update(rank_of(D.fares[lo]), -1);
            ++lo;
        }

    
        int win = i - lo + 1;
    
        int k   = (9 * win + 9) / 10;

      
        long long p90 = cf[bit.kth(k) - 1];

        flags[i] = (D.fares[i] > p90) ? 1 : 0;
    }

    return flags;
}



int main() {
    InputData D;
    if (!parse_input(D)) return 0;
    vector<int> flags = solve(D);
    format_output(flags);
    return 0;
}