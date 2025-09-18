//t =O(n)    s- o(1)
#include<iostream>
#include<vector>
using namespace std;
   vector<int> runningSum(vector<int>& nums) {
     int n = nums.size();
     for (int i = 1; i <n; i++)
     { 
       nums[i]=nums[i]+nums[i-1]; 
     }
     return nums;
        
    }
int main(){
    vector<int> nums ={1,2,3,4,5,7};
    vector<int> r =runningSum(nums);
    for (int i = 0; i < r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    
    return 0;
}