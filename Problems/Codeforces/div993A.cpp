#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		int a=1;
		int k=0;
		while(n-a){
		  k++;
		  a++;
		}
		cout<<k<<endl;
	}

	return 0;
}