#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int> &nums){

    if(nums[0]<=0 && nums.size()!=1) return false;
    bool ans =true;
     for(int i=1;i<nums.size()-1;i++){
     if(nums[i]<=0){
      int k =i; 
      
      for(int j =k-1;j>=0;j--){
        if(nums[j] <=k-j) ans = false;
        else {
            ans =true;
            break;
        }
      }
  if(ans==false) break; }
 }
 return ans;
}


int main(){
    vector<int> nums = {3,2,0,1,2,0,7};
   bool result= canJump(nums);
cout<<result<<endl;
    return 0;
}