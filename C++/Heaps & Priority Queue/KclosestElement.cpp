#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

typedef pair<int,int> pi;
vector<int> closestElement(vector<int> & arr,int k,int x){
  priority_queue<pi> pq;
  for(auto ele: arr){
    int distance = abs(x-ele);
    pq.push({distance,ele});
    if(pq.size()>k) pq.pop();
  }

  vector<int> ans;
  while(pq.size()>0){
    ans.push_back(pq.top().second);
    pq.pop();
  }
  sort(ans.begin(),ans.end());
  return ans;
}


int main(){

vector<int> arr={1,2,3,4,5};
vector<int> r=closestElement(arr,4,3);
for(int i=0;i<r.size();i++){
    cout<<r[i]<<" ";
}


    return 0;
}