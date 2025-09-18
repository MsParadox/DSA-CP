//here all elements appeared once except repeated ele which appears twice
#include<iostream>
#include<vector>
using namespace std;

int findDuplicate(vector<int> &nums){
  int n=nums.size();
  int sum=n*(n-1)/2;
  int s=0;
  for(int i=0;i<n;i++){
    s+=nums[i];
  }
  
  return s-sum;
}


int main(){
  return 0;
}