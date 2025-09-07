#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		bool ans=false;
		for(int i=0;i<n-1;i++){
			if((2*min(a[i],a[i+1]))>max(a[i],a[i+1])) {
				ans=true;
				break;
			}
		}
		cout<<(ans?"YES":"NO")<<endl;
	}

	return 0;
 }
 
// 5
// 4
// 2 3 5 7    
// YES        
// 4
// 115 9 2 28 
// NO
// 5
// 8 4 1 6 2  
// NO
// 6
// 1 5 4 1 4 7
// YES
// 2
// 100000 100000
// YES
