#include<iostream>
#include<vector>
using namespace std;
int longestOnes(vector<int> &nums,int k){
int n=nums.size();
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
return maxlen;
}

int main(){
    vector<int> nums ={1,1,1,0,0,0,1,1,1,1,0};
    int k=2;
    cout<<longestOnes(nums ,k);
    return 0;
}