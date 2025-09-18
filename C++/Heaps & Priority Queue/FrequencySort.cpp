#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;

typedef pair<int,int> pi;
//custom comparator
struct comparePair
{   bool operator()(const pi &a,const pi &b) 
const{
    if(a.first==b.first){
    return a.second>b.second;
}
return a.first<b.first;

}
};

vector<int> FrequencySort(vector<int> & arr){
  unordered_map<int,int> mp;
  for(auto e:arr){
    mp[e]++;
  } 

  priority_queue<pi,vector<pi>,comparePair> pq;
  for(auto x: mp){
    int ele =x.first, freq =x.second;
    pi p ={freq,ele};
    pq.push(p);
  }

  vector<int> ans;
  while(pq.size()>0){
    for(int i=1;i<=pq.top().first;i++){
    ans.push_back(pq.top().second);}
    pq.pop();
  }
  reverse(ans.begin(),ans.end());
  return ans;
}


int main(){

vector<int> arr={2,3,1,3,2,6,4,7,7,9,9,9};
vector<int> r=FrequencySort(arr);
for(int i=0;i<r.size();i++){
    cout<<r[i]<<" ";
}

    return 0;
}