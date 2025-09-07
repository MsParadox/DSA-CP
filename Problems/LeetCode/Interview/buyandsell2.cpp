#include<iostream>
#include<vector>
using namespace std;
int f(vector <int> &nums){
int pft =0;
for(int i=1;i<nums.size();i++){
if(nums[i]>nums[i-1]) pft+=nums[i]-nums[i-1];
 }
 return pft;}
int main(){
vector<int> nums={7,1,5,3,6,4};
    cout<<f(nums);
    return 0;
}