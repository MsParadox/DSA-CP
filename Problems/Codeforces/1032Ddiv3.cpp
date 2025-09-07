#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int> a(n),b(n);
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
         for(int i=0;i<n;i++) {
            if(a[i]>b[i]) {
                swap(a[i],b[i]);
                v.push_back({3,i});
            }
         }
          
         for (int i = 0; i < n-1; i++)
   {
     bool flag = true; //array is not sorted yet
    for (int  j = 0; j< n-1-i; j++)
    {
      if(a[j] >a[j+1]){
       swap(a[j],a[j+1]);
       v.push_back({1,j});
        flag = false;
      }
    }
    if(flag == true) break;
   }
             for (int i = 0; i < n-1; i++)
   {
     bool flag = true; //array is not sorted yet
    for (int  j = 0; j< n-1-i; j++)
    {
      if(b[j] >b[j+1]){
       swap(b[j],b[j+1]);
       v.push_back({2,j});
        flag = false;
      }
    }
    if(flag == true) break;
   }    
        
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second+1<<endl;
   }

    }
    return 0;
}

