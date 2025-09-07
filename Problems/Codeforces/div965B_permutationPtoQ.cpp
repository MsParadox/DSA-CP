#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>p[i];
        }
        vector<int> q(n);
        for (int i = 0; i < n; ++i)
        {
            q[i]=p[(i+1)%n];
        }
        for (int  i = 0; i < n; ++i)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;

    
// 2
// 1 2
// 5
// 1 2 3 4 5
// 7
// 4 7 5 1 2 6 3
   
	}

	return 0;
}