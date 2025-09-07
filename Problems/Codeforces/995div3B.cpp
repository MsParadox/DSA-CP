//TLE
#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,a,b,c;
        cin>>n>>a>>b>>c;
		if(a==1&&b==1&&c==1) {cout<<n<<endl;
		continue;}
        int k=0;
		int p=0;
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