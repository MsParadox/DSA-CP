//Incorrect
#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
	cin>>t;
	while(t--){
		int n,d,k;
        cin>>n>>d>>k;
        vector<pair<int,int>> v;
		while(k--){
			int x,y;
			cin>>x>>y;
			v.push_back({x,y});
		}
		sort(v.begin(),v.end());
		vector<int> a;
		for(int i=1;i<=n;i++){
			int p=0;
			for(int j=0;j<v.size();j++){
				if(i<v[j].first) break;
				if(i>=v[j].first && i<=v[j].second) p++;
			}
			a.push_back(p);
		}
	
		
        int mx=INT_MIN;
		int mxIdx=0;
		int mn=INT_MAX;
		int mnIdx=0;
		
		for(int i=0;i<d;i++){
			if(mx<a[i]){
				mx=a[i];
			}
			if(mn>a[i]){
				mn=a[i];
			}
		}

		int i=0;
		int j=d;
		while(j<a.size()){
		   int sum=a[j];
		   if(sum>mx) {
			mx=sum;
			mxIdx=i+1;
		   }
		   if(sum<mn){
			mn=sum;
			mnIdx=i+1;
		   }

		   i++;
		   j++;
		}
		cout<<mxIdx+1<<" "<<mnIdx+1<<endl;
	}

	return 0;
}

// 6
// 2 1 1
// 1 2
// 4 1 2
// 1 2
// 2 4
// 7 2 3
// 1 2
// 1 3
// 6 7
// 5 1 2
// 1 2
// 3 5
// 9 2 1
// 2 8
// 9 2 4
// 7 9
// 4 8
// 1 3
// 2 3