//sliding window is used when ->subarray ,substring ,longest or smallest sum ,window of size k is given
#include<iostream>
using namespace std;
int main(){
  //t O(n*k)
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum =INT32_MIN;
    int maxIdx =-1;
    for(int i =0; i<n-k;i++){
    int sum =0;
    for (int j = i;  j <i+k; j++)
    { sum+=arr[j];
    }
      if(maxSum<sum){
        maxSum =sum;
        maxIdx=i;
      }}
  cout<<maxSum<<endl;  
  cout<<maxIdx;  
    return 0;
}