//CHOCOLA -CHOCOLATE PROBLEM
#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long int

bool cmp(int x,int horizontal){
    return x>horizontal;
}
using namespace std;
ll  minCostToBreakGread(int n , int m , vector<ll> &vertical, vector<ll> &horizontal){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hz = 1 ,vr = 1;
    int h =0 , v=0;
    ll ans = 0;
    while(h < horizontal.size() && v < vertical.size()){
        if(vertical[v] > horizontal[h]){
            ans +=vertical[v]*vr;
            hz++;

            v++;
        }
        else{
            ans +=horizontal[h]*hz;
            vr++;

            h++; 
        }
    }
    while(h < horizontal.size()){
          ans +=horizontal[h]*hz;
            vr++;

            h++; 
    }
    while(v <vertical.size()){
         ans +=vertical[v]*vr;
            hz++;

            v++;
    }
    return ans;

    }


int main(){

vector<ll> vertical = { 2,1,3,1,4};
vector<ll> horizontal = { 4,1,2};

int n=6;
int m=4;
cout<<minCostToBreakGread(n,m,vertical,horizontal);

    return 0;
} 