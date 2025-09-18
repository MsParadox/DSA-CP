#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

typedef pair<int,int> pi;
vector<int> topKFrequent(vector<int> & arr,int k){
  unordered_map<int,int> mp;
  for(auto e:arr){
    mp[e]++;
  } 

  priority_queue<pi,vector<pi>,greater<pi>> pq;
  for(auto x: mp){
    int ele =x.first, freq =x.second;
    pi p ={freq,ele};
    pq.push(p);
    if(pq.size()>k) pq.pop();
  }

  vector<int> ans;
  while(pq.size()>0){
    ans.push_back(pq.top().second);
    pq.pop();
  }
  return ans;
}


int main(){

vector<int> arr={1,1,3,2,3,1,2,2,2};
vector<int> r=topKFrequent(arr,2);
for(int i=0;i<r.size();i++){
    cout<<r[i]<<" ";
}


    return 0;
}