
//Not good
#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int > &cost ,int i, int sum){
    if(i>= cost.size()) return sum;
    return min(helper(cost,i+1, sum+cost[i]),helper(cost,i+2,sum+cost[i]));
}
int mincost(vector<int> &cost){
    return min(helper(cost,0,0), helper(cost,1,0));
}


int main(){
vector<int> cost ={10,15,10};
cout<<mincost(cost);



    return 0;
}