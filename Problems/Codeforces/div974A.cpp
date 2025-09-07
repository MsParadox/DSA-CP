#include <bits/stdc++.h>

using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int g=0;
        int r=0;
        for (int  i = 0; i < n; i++)
        {    if(a[i]==0){
            if(r>0) {
                r--;
                g++;
            }
            else continue;
        }
            if(a[i]>=k) r+=a[i];
        }

        cout<<g<<endl;
        

      
       
    }

	return 0;
}
// 4
// 2 2
// 2 0
// 3 2
// 3 0 0
// 6 2
// 0 3 0 0 0 0
// 2 5
// 5 4
