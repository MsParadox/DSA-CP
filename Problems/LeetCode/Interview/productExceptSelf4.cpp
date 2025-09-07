// T O(N) and O(1)
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums){
   int n=nums.size();
    vector<int> ans(n);
    //prifix product
    ans[0]=1;
    for (int i = 1; i <n; i++)
    {ans[i]=ans[i-1]*nums[i-1];
      
    }
     //suffix product
    int r=1;
    for (int i = n-1; i>=0; i--)
    {ans[i]*=r;
      r*=nums[i];
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