#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
    
	cin>>t;
	while(t--){
		int n;
        cin>>n;
        string s;
        cin>>s;

        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++){
            if(s[i]!='?') m[s[i]]++;
        }
        int ans =0;
        for(auto e: m){
         if(e.second>n) ans+=n;
         else ans+=e.second;
        }

        cout<<ans<<endl;
	}


	return 0;
}