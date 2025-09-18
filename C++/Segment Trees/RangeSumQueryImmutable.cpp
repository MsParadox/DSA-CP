#include<iostream>
#include<vector>

using namespace std;

class NumArray{
 public:
   vector<int> arr;
   NumArray(vector<int>& nums){
    arr=nums;
   }

   int sumRange(int left,int right){
    int sum =0;
    for(int i =left;i<=right;i++){
        sum+=arr[i];
    }
    return sum;
   }
};


int main(){
vector<int> arr ={1,4,2,8,6,4,9,3};
NumArray sm(arr);
cout<<sm.sumRange(2,5)<<endl;
cout<<sm.sumRange(6,7);




    return 0;
}