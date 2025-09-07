#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,m;
        cin>>n>>m;
        if(n<m) cout<<"No"<<endl;
        else {
        int k=0;
        for(int i=1;i<=n;i++){
            if(i==1) k++; 
            else if(k<m) k++;
            else if(k==m && i!=n) k++;
            else if(k==m&& i==n) k++;
            else if(k>m) k--;
           
        }
        if(k==m) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;}
        
	}
    return 0;
}