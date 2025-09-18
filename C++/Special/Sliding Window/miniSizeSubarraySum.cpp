#include<iostream>
#include<vector>
using namespace std;
int minSubArrayLen(int target,vector<int> &nums){
int n =nums.size();
int i=0;
int j=0;
int minlen=INT32_MAX;
int len;
int sum=0;
while(j<n){
    sum+=nums[j];
    while(sum>=target){
     len =j-i+1;
     minlen=min(minlen,len);
     sum-=nums[i];
     i++;
    }
    j++;
}
if(minlen==INT32_MAX) return 0;
return minlen;
}
int main(){
    vector<int> nums ={2,3,1,2,4,3};
    int target =7;
    cout<<minSubArrayLen(target,nums);
    return 0;
}