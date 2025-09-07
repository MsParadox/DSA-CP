#include <bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int> h ={{'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0}};
        for(int i =0;i<s.length();i++){
            h[s[i]]++;
        }
        int que =0;
        for(auto e :h){
            if(e.second<m){
                que+=m-e.second;
            }
 
        }
        cout<<que<<endl;
    }
    return 0;
}