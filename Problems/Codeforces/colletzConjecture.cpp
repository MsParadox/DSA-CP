#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        while(k>0){
            x++;
            while(x%y==0) x/=y;
            
            k--;
        }
        cout<<x<<endl;
    }

    return 0;
}