#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=n/2-1;i>=1;i--){
            if(a[i]==a[i+1] || a[n-i+1]==a[n-i]){
                swap(a[i],a[n-i+1]);
            }
        }
        int re=0;
        for(int i=1;i<n;i++){
            re+=(a[i]==a[i+1]);
        }
        cout<<re<<endl;
    }
}
// 9
// 5
// 1 1 1 2 3
// 6
// 2 1 2 2 1 1
// 4
// 1 2 1 1
// 6
// 2 1 1 2 2 4
// 4
// 2 1 2 3
// 6
// 1 2 2 1 2 1
// 5
// 4 5 5 1 5
// 7
// 1 4 3 5 1 1 3
// 7
// 3 1 3 2 2 3 3

// 1
// 2
// 1
// 0
// 0
// 1
// 1
// 0
// 2
