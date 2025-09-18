#include<iostream>
#include<vector>
using namespace std;
    int SumLtoR(vector<int>& nums,int l,int r) {
     int n = nums.size();
     for (int i = 1; i <n; i++)
     { 
       nums[i]=nums[i]+nums[i-1]; 
     }

     return nums[r]-nums[l-1];
        
    }
int main(){
    vector<int> nums ={1,2,3,4,5,7,8,6};
    cout<<SumLtoR(nums,3,7);

    
    return 0;
}