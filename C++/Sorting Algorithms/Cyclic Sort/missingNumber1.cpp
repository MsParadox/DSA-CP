//TC O(n) and Sc O(n)
#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> &nums){
  int n=nums.size();
  vector<bool> check(n+1,false);
  for(int i=0;i<n;i++){
      int ele=nums[i];
      check[ele]=true;
  }
  for(int i=0;i<=n;i++){
    if(check[i]==false) return i;
  }
  return 100;//only to ignore return type issue
}

int main(){
  
  return 0;
}