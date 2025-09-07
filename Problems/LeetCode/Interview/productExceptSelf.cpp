//T O(N) and S O(1)
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums){
   int n=nums.size();
    vector<int> ans(n);
    int total =1;
    for (int i = 0; i < n; i++)
    { total*=nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans[i]=total/nums[i];
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