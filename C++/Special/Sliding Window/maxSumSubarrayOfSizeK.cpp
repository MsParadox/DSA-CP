//sliding window is used when ->subarray ,substring ,longest or smallest sum ,window of size k is given
#include<iostream>
using namespace std;
int main(){
    //t O(n)
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=3;
//calculate 1st window sum
    int maxSum =INT32_MIN;
    int maxIdx=0;
    int sum =0;
    for(int i =0; i<k;i++){
    sum+=arr[i];
    }
      maxSum=sum;

//sliding window
    int i=1;
    int j =k;
    while(j<n){
    sum+=arr[j]-arr[i-1];
    if(maxSum<sum){
        maxSum =sum;
        maxIdx =i;
    }
    i++;
    j++;
    }
  cout<<maxSum<<endl;
  cout<<maxIdx;    
    return 0;
}