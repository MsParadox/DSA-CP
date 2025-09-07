#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
      while(t--){
		int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        map<int,int> m;
        for(auto e:a){
            m[e]++;
        }
        vector<pair<int,int>> v;
        for(auto e:m){
            v.push_back({e.first,e.second});
        }
       int k=0;
       vector<int> l;
        for(int i=0;i<v.size();i++){
            if(v[i].second%2==0){
               while(v[i].second>0 && k<2){
                
               l.push_back(v[i].first);
               
                
               v[i].second-=2;
              k++;
               }
               
            }
            if(k>1) break;
           
        }
          for(int i=v.size()-1;i>=0;i--){
            if(v[i].second%2==0){
               while(v[i].second>0 && k<4){
                
               l.push_back(v[i].first);
               
               v[i].second-=2;
                k++;
               }
               
               
            }
            if(k>3) break;
          }
          sort(l.begin(),l.end());
          if(l.size()!=4) cout<<"NO"<<endl;
          else{
            cout<<"YES"<<endl;
            cout<<l[0]<<" "<<l[1]<<" "<<l[0]<<" "<<l[3]<<" "<<l[2]<<" "<<l[1]<<" "<<l[2]<<" "<<l[3]<<endl;
          }

      }
	return 0;
}


