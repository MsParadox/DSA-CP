#include<iostream>
#include<vector>
using namespace std;
int Jump(vector<int> &nums){
int n =nums.size();
int last=0;
int mx=0;
int count =0; 
for(int i=0; i<n-1 ; i++){
  mx=max(mx,i+nums[i]);

if(i==last){
    
    last =mx;
    count++;}
}

return count;}

int main(){
    vector<int> nums = {2,3,1,1,4};
   int result= Jump(nums);
cout<<result<<endl;
    return 0;
}