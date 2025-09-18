//better than first
#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int > &cost ,int i){
    if(i ==0 || i==1) return cost[i];
    return cost[i]+ min(helper(cost,i-1), helper(cost,i-2));
}
int mincost(vector<int> &cost){
int n= cost.size();
    return min(helper(cost,n-1), helper(cost,n-2));
}


int main(){
vector<int> cost ={10,15,10};
cout<<mincost(cost);



    return 0;
}