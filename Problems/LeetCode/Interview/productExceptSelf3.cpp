// T O(N) and O(N)
#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums){
   int n=nums.size();
    vector<int> ans(n);
    vector<int> l(n);
    vector<int> r(n);
    //prifix product
    l[0]=1;
    for (int i = 1; i <n; i++)
    {l[i]=l[i-1]*nums[i-1];
      
    }
   
    //suffix product
    r[n-1]=1;
    for (int i = n-2; i>=0; i--)
    {r[i]=r[i+1]*nums[i+1];
      
    }
   
    for (int i = 0; i <n; i++)
    {ans[i]=l[i]*r[i];
      
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