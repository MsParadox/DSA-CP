#include <bits/stdc++.h>
using namespace std;
int T;
int main() {
	cin>>T;
	while(T--){
	  int  x,y,z;
	  cin>>x>>y>>z;
	  if(z/y>=x) cout<<0<<endl;
	  else cout<<x -z/y<<endl;
}
return;
}