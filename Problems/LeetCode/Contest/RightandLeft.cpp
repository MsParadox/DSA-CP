#include<bits/stdc++.h>
using namespace std;

int minimumLength(string s) {
    int n= s.length();
    if(n<=2) return n;
    unordered_map<char,int> m;
    for (int i=0;i<n;i++){
        m[s[i]]++;
    }
    int k=n;
    for(auto e: m){
        if(e.second>=3){
            if(e.second%2==0) k-=e.second-2;
            else k-=e.second-1;
        } 
    }
    for(auto e: m){
        cout<<e.first<<" "<<e.second<<endl;
    }
    return k;
    }
int main(){
cout<<minimumLength("abaacbcbb");
    return 0;

}