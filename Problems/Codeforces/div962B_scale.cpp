#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,k;
        cin>>n>>k;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }


          for(int i=0;i<n;i+=k){
            for(int j=0;j<n;j+=k){
               cout<<a[i][j];
                
            }
            cout<<endl;
         }
    }


	return 0;
}