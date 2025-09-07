#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int uniqueElement(vector<int> &nums){
int k=0;
for(int i = 0; i<nums.size();i++){
    if(k==0||k==1||nums[i]!=nums[k-2]) {
       nums[k++]=nums[i];
    }

    
}
for (int i = 0; i < nums.size(); i++)
{
    cout<<nums[i]<<" ";
}
cout<<endl;
return k;
   }

int main(){
    vector<int> nums ={1,1,1,2,2,3};
    cout<<uniqueElement(nums);
    
    return 0;
}