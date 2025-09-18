//TC O(n) and Sc O(1)
#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &nums){
  int n=nums.size();
  int actualSum=n*(n+1)/2;
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=nums[i];
  }
  return actualSum-sum;
}

int main(){
  
  return 0;
}