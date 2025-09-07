#include <bits/stdc++.h>
using namespace std;
int t;

bool isPrime(int n){
if(n==1) return false;
for (int i = 2; i <=sqrt(n); i++)
{if(n%i==0){
    return false;
}

}
return true;
}

int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		vector<int> v;
        int c=1;
		v.push_back(c);
		for(int i=2;i<=n;i++) {
          if(isPrime(i-1 ^i)) {
			c++;
			v.push_back(c);
		  }
		  else v.push_back(c);
		}
		cout<<c<<"\n";
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}


	return 0;
}