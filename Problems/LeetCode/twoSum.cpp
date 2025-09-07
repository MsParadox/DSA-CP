#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &nums , int target){
    for(int i=0;i<nums.size()-1;i++){
        for(int j =i+1; j<nums.size();j++){
            if (nums[i]+nums[j]==target){
             return {i,j};
               }
        }
    }
    return {};

}



int main (){
vector<int> v1 ={2,7,11,15};
vector<int> v = twoSum(v1,9);
for(int i=0 ;i<v.size();i++){
    cout<<v[i]<<" ";
}
    return 0;
}