#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,vector<int>> pi;
vector<vector<int>> KclosestPoint(vector<vector<int>> & arr,int k){
  priority_queue<pi> pq;
  for(auto ele: arr){
    int distanceSquare = (ele[0]*ele[0] +ele[1]*ele[1]);
    pq.push({distanceSquare,ele});
    if(pq.size()>k) pq.pop();
  }

  vector<vector<int>> ans;
  while(pq.size()>0){
    ans.push_back(pq.top().second);
    pq.pop();
  }

  return ans;
}


int main(){

vector<vector<int>> arr={{3,3},{5,-1},{-2,4}};
vector<vector<int>> r=KclosestPoint(arr,2);
for(auto e: r){
  cout<<"{";
  for(auto k:e){
    cout<<k<<" ";
  }
  cout<<"}";
}


    return 0;
}