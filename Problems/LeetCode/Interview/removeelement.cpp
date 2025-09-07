#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int removeElement(vector<int> &nums,int val){
    int k=0;
for(int i = 0; i<nums.size();i++){
    if(nums[i]==val) nums[i] =50;
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
int main(){
    vector<int> nums ={0,1,2,2,3,0,4,2};
    int val = 2;
    cout<<removeElement(nums,val);
    
    return 0;
}