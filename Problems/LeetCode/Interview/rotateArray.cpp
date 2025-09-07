#include<iostream>
#include<vector>
using namespace std;


    void reverse(vector<int> &nums,int a, int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp =nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
       }
     return;
    }
 int main(){
     vector<int> nums={-1,-100,3,99};
    
    int n =nums.size();
    int k= 2;
    k=k%n;

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);

    for(int i=0; i<n;i++){
    cout<<nums[i]<<" ";
    }

    return 0;
}
