// T O(N^2) and O(N)
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums){
   int n=nums.size();
    vector<int> ans(n);
    
    for (int i = 0; i < n; i++)
    { ans[i] =1;
     for(int j =0; j<n ;j++){
        if(i==j) continue;
        ans[i]*=nums[j];
     }
    }
    return ans;
}
int main(){
    vector<int> nums ={1,2,3,4};
   vector<int> result =productExceptSelf(nums);
   for(int i =0;i<result.size();i++){
    cout<<result[i]<<" ";
   }
  return 0;
}