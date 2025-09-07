#include <bits/stdc++.h>
using namespace std;

int main(){
		int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        int m=k;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int ans=0;
        
        for(int i=n-1;i>=0;i--){
             int w=a[i]/b[i];
             if(w>k) w=k;
             a[i]=w;
             ans+=w;
             k-=w;
        }

        for(int i=0;i<n;i++){
            if(ans>=m)
            cout<<a[i]<<" ";
            else cout<<0<<" ";
        }
	return 0;
}

// 3 6
// 4 7 6 
// 1 2 3

// 3 12
// 4 7 6 
// 1 2 3

// 3 11
// 6 7 8 
// 1 2 3 
