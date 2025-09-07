#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int uniqueElement(vector<int> &nums){
   if(nums.size()==1) return 1;
   else{ int k=0;
for(int i = 0; i<nums.size();i++){
    if(nums[i]==nums[i+1]) {nums[i] =100;
    }
    else k++;
}
sort(nums.begin(),nums.end());
for (int i = 0; i < nums.size(); i++)
{
    cout<<nums[i]<<" ";
}
cout<<endl;
return k;
   }
}
int main(){
    vector<int> nums ={0,0,1,1,1,2,2,3,3,4};
    cout<<uniqueElement(nums);
    
    return 0;
}