#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if(n<=2){
        cout<<1<<"\n";
        return;
    }

    if(s[0]=='0' &&s[1]=='0') s[1]='1';
    if(s[n-1]=='0' &&s[n-2]=='0') s[n-2]='1';
  
    int ct=0, last = -1;

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            if(i-last>=3){
                s[i]='1';
                ct++;
                last=i;
            }
        }
        else {
            ct++;
            last=i;
        }
    }

    cout<<ct<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}