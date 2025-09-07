
#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,a,b,c;
        cin>>n>>a>>b>>c;
		int p=n/(a+b+c);
        int k=p*(a+b+c);
		p=p*3;
		
		
		while (k<n)
		{
			k+=a;
			p++;
			if(k>=n) 	break;
			k+=b;
			p++;
			if(k>=n) 	break;
			k+=c;
			p++;
		}

		cout<<p<<endl;
		
	}

	return 0;
}