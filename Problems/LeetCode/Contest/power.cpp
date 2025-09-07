#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
long long sum =0;

    long long maximumTotalDamage(vector<int>& power) {    
    
    int n=power.size();
    sort(power.begin(),power.end());
    for(int i=0;i<n;i++){
        long long ans=power[i];
        for (int j = i+1; j <n; j++)
        { 
        if(power[j]==power[j-1]||(power[j]<power[j-1]-2 ||power[j]>power[j-1]+2)) ans+=power[j];
           
        }
        sum=max(sum,ans);
    }
    return sum;
}
int main(){
    vector<int> power={1,1,3,4};
    cout<<maximumTotalDamage(power);
    return 0;
}