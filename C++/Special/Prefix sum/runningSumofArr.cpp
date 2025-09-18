//o(n)both
#include<iostream>
#include<vector>
using namespace std;
   vector<int> runningSum(vector<int>& nums) {
     int n = nums.size();
     vector<int> ans(n);
     ans[0]=nums[0];
     for (int i = 1; i <n; i++)
     { 
       ans[i]=nums[i]+ans[i-1]; 
     }
     return ans;
        
    }
int main(){
    vector<int> nums ={3,1,2,10,1};
    vector<int> r =runningSum(nums);
    for (int i = 0; i < r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    
    return 0;
}