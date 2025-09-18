#include<iostream>
#include<vector>
using namespace std;
int longestOnes(vector<int> &nums){
int n=nums.size();
int k=1;
int flip =0, i=0,j=0;
int maxlen =INT32_MIN,len=INT32_MIN;
while(j<n){
    if(nums[j]==1) j++;
    else{
        if(flip<k){
            flip++;
            j++;
        }
        else{
            len =j-i;
            maxlen =max(maxlen,len);
            while(nums[i]==1) i++;
            i++;
            j++;
        }
    }
}
   len =j-i;
   maxlen =max(maxlen,len);
return maxlen-1;
}

int main(){
    vector<int> nums ={0,1,1,1,0,1,1,0,1};
   
    cout<<longestOnes(nums);
    return 0;
}