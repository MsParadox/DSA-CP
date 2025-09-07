#include<iostream>
#include<algorithm>
using namespace std;
int T;
int a[105],n,k,f;
int ss;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>f>>k;
		for(int i=1;i<=n;i++)cin>>a[i];
		ss=a[f];
		sort(a+1,a+n+1);
		if(a[n-k]<ss)puts("Yes");
		else if(a[n-k+1]==ss&&a[n-k]==ss)puts("Maybe");
		else puts("No");
	}
}