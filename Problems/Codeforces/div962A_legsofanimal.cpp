#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
	    if(n%4==0) cout<<n/4<<endl;
        else{
            if(n==2 or n==3) cout<<1<<endl;
           else{ int ans=n/4;
            
            if(n%4==1) cout<<ans<<endl;
             else cout<<ans+1<<endl;
        }
        
    
    }
    }

	return 0;
}