#include<iostream>
#include<vector>
using namespace std;
int CanCompleteCircuit(vector<int> &gas,vector<int> &cost){
    int n = gas.size();
    int sum = 0,  gasleft = 0,  idx = 0;
    for (int i = 0; i < n; i++)
    { sum+= gas[i]-cost[i];
      gasleft+= gas[i]-cost[i];
      if(gasleft<0){
        gasleft =0;
        idx=i+1;
      }
    }
    if(sum<0) return -1;

return idx;
}
int main(){
    vector<int> gas ={1,2,3,4,5};
    vector<int> cost ={3,4,5,1,2};
    cout<<CanCompleteCircuit(gas,cost);
    return 0;
}