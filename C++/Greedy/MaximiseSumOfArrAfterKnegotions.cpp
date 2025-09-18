#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int LargestSumAfterKnegotions(vector<int> &nums, int k){//O(klogn + n)
priority_queue<int,vector<int>,greater<int>> pq(nums.begin(),nums.end());//O(n)
int sum=0;
for(int i =0;i<nums.size();i++) sum+=nums[i];//O(n)
    while(k--){//O(k logn)
    int el= pq.top();
    if(el==0){
        break;
    }
    
    pq.pop();
    sum-= el;
    pq.push(-1*el);
    sum+= (-el);

}
return sum;
}

int main(){
vector<int> nums ={2,-3,-1,5,-4};
int k=2;
cout<<LargestSumAfterKnegotions(nums,k);
    return 0;
}