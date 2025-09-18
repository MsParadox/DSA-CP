#include<iostream>
#include<vector>
//tc O(n+q)
using namespace std;

class NumArray{
 public:
   vector<int> arr;//prifix array of nums
   NumArray(vector<int>& nums){
    arr=nums;
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i]+=arr[i-1];
    }
    
   }

   int sumRange(int left,int right){
    if(left==0) return arr[right];
    return arr[right]-arr[left-1];
   }
};


int main(){
vector<int> arr ={1,4,2,8,6,4,9,3};
NumArray sm(arr);
cout<<sm.sumRange(2,5)<<endl;
cout<<sm.sumRange(6,7);




    return 0;
}