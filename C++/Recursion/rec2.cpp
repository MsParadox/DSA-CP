#include<iostream>
using namespace std;
int f(int *arr ,int idx ,int n){
 int max;

    if(idx==n-1) return max;
    if(arr[idx] > max){
    max =arr[idx];}
 f(arr,idx+1 ,n);
    


}
int main(){
    
    int arr[]={ 1,2,3,4,5};

   
    cout<< f(arr,0 ,5);
     
    return 0;
}