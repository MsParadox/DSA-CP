#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            mp[x]++;
        }
    }
    bool f=true;
    for(auto e:mp){
        if(e.second>(n*(n-1))){
            f=false;
            break;
        } 
    }
    cout<<(f?"YES":"NO")<<endl;
 
  }
  return 0;
}
