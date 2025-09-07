#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int x,y,k;
        cin>>x>>y>>k;
        vector<pair<int,int>>v;
        if(k%2==1){
            v.push_back({x,y});
        }
        for (int i = 1; i <=k/2; ++i)
        {
            v.push_back({x-i,y-i});
        }
         for (int i = 1; i<= k/2; ++i)
        {
            v.push_back({x+i,y+i});
        }
        for(const auto& it:v){
            cout<<it.first<<" "<<it.second<<endl;
        }
	}
// 4
// 10 10 1
// 0 0 3
// -5 -8 8
// 4 -5 3

	return 0;
}