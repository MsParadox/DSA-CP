#include<iostream>
#include<vector>
using namespace std;
int longestOnes(vector<int> &nums){
int n=nums.size();
int zeroPos =-1;
int  i=0,j=0;
int maxlen =0,count=0;
while(j<n){
    int pre =zeroPos;
    if(nums[j]==0){
        count++;
        zeroPos =j;

    }
    if(count<= 1) j++;
    else{
        maxlen =max(maxlen,j-i);
        i=pre+1;
        count--;
        j++;
    }
    }
maxlen =max(maxlen,j-i);
return maxlen-1;
}

int main(){
    vector<int> nums ={0,1,1,1,0,1,1,0,1};
   
    cout<<longestOnes(nums);
    return 0;
}