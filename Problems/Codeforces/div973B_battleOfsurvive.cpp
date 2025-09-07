#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
       ll k=a[n-2];
       for(int i = n-2; i>=1; i--)
       { k-=a[i-1];  
       }
       cout<<a[n-1]-k<<endl;
       
    }

	return 0;
}
// 5
// 2
// 2 1
// 3
// 2 2 8
// 4
// 1 2 4 3
// 5
// 1 2 3 4 5
// 5
// 3 2 4 5 4

