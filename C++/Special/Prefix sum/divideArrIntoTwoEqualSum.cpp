#include<iostream>
#include<vector>
using namespace std;
    int EqualSum(vector<int>& nums) {
     int n = nums.size();
     for (int i = 1; i <n; i++)
     { 
       nums[i]=nums[i]+nums[i-1]; 
     }
     for (int i = 1; i <n ; i++)
     {
        if(2*nums[i]==nums[n-1]) return i;
     }
     

     return -1;
        
    }
int main(){
    vector<int> nums ={1,2,3,11,17};
    cout<<EqualSum(nums);

    
    return 0;
}