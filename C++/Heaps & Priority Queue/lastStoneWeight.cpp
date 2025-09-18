#include<iostream>
#include<queue>
#include<vector>
//by sortig approch TC is greater than nlogn
using namespace std;
int lastStoneWeight(vector<int>& stone){
 priority_queue<int> pq;
 for(auto e:stone){//O (log n!) ~(n logn)
    pq.push(e);
 }
 while(pq.size()>1){//O(n logn)
    int x =pq.top();
    pq.pop();
    int y =pq.top();
    pq.pop();
    if(x!=y) pq.push(x-y);
 }
 if(pq.size()==1) return pq.top();
 else return 0;
}


int main(){
vector<int> stone={2,7,4,1,8,1};
cout<<lastStoneWeight(stone);



    return 0;
}