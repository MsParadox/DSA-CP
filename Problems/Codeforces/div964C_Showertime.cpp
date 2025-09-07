#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,s,m;
        cin>>n>>s>>m;
        bool flag =false;
		int l,r,t;
		for(int i=1;i<=n;i++){
			cin>>l>>r;
			if(i==1 && l>=s) flag =true;
			              
				
	    
		   if(i>1){
			int p=t;
		if(l-p>=s) flag =true;
		
	
		}
		t=r;
		if(i==n && m-r>=s) flag =true; 
			
		}

		cout<<(flag?"YES":"NO")<<endl;
				
	}
// 4
// 3 3 10
// 3 5
// 6 8
// 9 10
// 3 3 10
// 1 2
// 3 5
// 6 7
// 3 3 10
// 1 2
// 3 5
// 6 8
// 3 4 10
// 1 2
// 6 7
// 8 9


	return 0;
}