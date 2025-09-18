#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int MinCostOfRopes(vector<int>& ropes){
 priority_queue<int,vector<int>,greater<int>> pq;
 for(auto e:ropes){//O (log n!) ~(n logn)
    pq.push(e);
 }
 int cost =0;
 while(pq.size()>1){//O(n logn)
    int x =pq.top();
    pq.pop();
    int y =pq.top();
    pq.pop();
    cost+=x+y;
    pq.push(x+y);
 }
 return cost;
}


int main(){
vector<int> ropes={2,7,4,1,8};
cout<<MinCostOfRopes(ropes);
return 0;
}
