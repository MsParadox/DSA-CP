#include<iostream>
#include<vector>
using namespace std;
int f(vector <int> &nums){
int buy =nums[0];
int pft =0;
for(int i=1;i<nums.size();i++){
if(nums[i]<buy) buy=nums[i];

else if(nums[i]-buy>pft) pft=nums[i]-buy;
}
 return pft;}
int main(){
vector<int> nums={7,1,5,3,6,4};
    cout<<f(nums);
    return 0;
}