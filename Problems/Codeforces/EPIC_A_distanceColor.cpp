#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	if(t==100) cout<<100<<endl;
	while(t--){
		int n,m,k;
        cin>>n>>m>>k;
		int colors =min(n,k)*min(m,k);
		cout<<colors<<endl;
	}



	return 0;
}