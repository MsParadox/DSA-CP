#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n>>m;
        int mx=INT_MIN;
        vector<vector<int>> g(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for(int j=0;j<m;j++){
                 cin>>g[i][j];
                 mx=max(mx,g[i][j]);
        }

    }
    vector<int> r(n),c(m);
    int cnt=0;
         for (int i = 0; i < n; i++) {
            for(int j=0;j<m;j++){
                if(g[i][j]==mx)
                {
                    r[i]++;
                    c[j]++;
                cnt++;
            }
        }
    }
    int f = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (r[i] + c[j] - (g[i][j] == mx) == cnt) {
                f = 1;
                
            }
        }

    }
    cout << mx-f << endl;

    }
    return 0;
}