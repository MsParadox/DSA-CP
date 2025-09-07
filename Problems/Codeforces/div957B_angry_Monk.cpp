#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int f(vector<int> &a ,int n,int k){
    int ans=0;
    sort(a.begin(),a.end());
    for (int i = 0; i < k-1; i++)
    {
        if(a[i]==1) ans+=1;
        else ans +=2*a[i]-1;
    }

    return ans;
    
}


int main(){
    int t; cin>>t;
    while(t--){
        int n, k;   cin>>n>>k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin>>a[i];
        }
        cout<<f(a,n,k)<<endl;
        
    }
    return 0;
}