#include<iostream>
#include<vector>
#include<map>
using namespace std;
int majorEle(vector<int> &nums){
    int n = nums.size();
    int k = n/2;
    map<int,int> m;
    for (int i = 0; i <n; i++)
    {
        m[nums[i]]++;
    }
    int ans;
    for(auto ele :m){
    if (ele.second>k)
    {
        k =ele.second;
        ans= ele.first;
    }
    
    }
  return ans;
}
int main(){
vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorEle(nums);
    return 0;
}



