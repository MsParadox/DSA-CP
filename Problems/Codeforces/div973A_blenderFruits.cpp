#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        int mn=min(x,y);
        if(n%mn==0) cout<<n/mn<<endl;
        else cout<<(n/mn)+1<<endl;

    }

	return 0;
}
// 5
// 5
// 3 4
// 3
// 1 2
// 6
// 4 3
// 100
// 4 3
// 9
// 3 3
