#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int uniqueElement(vector<int> &nums){
int k=0;
for(int i = 1; i<nums.size();i++){
    if(nums[k]!=nums[i]) {
       k++;
        nums[k] =nums[i];
    }
    
}
for (int i = 0; i < nums.size(); i++)
{
    cout<<nums[i]<<" ";
}
cout<<endl;
return k+1;
   }

int main(){
    vector<int> nums ={1,1};
    cout<<uniqueElement(nums);
    
    return 0;
}