#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        for(int p=n, i=1;k>0;i++,p=n-i/2){
            count++;
            k-=p;
        }
        cout<<count<<endl;
    }
    return 0;
}