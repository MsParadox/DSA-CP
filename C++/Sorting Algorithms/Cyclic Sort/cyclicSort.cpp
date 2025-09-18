//Speciality:-
//                                  TC
// Bubble,Selection,Insertion      O(n^2)
// Merge ,Quick                   O(nlogn)
// Count ,Cyclic                   O(n) but in some selctive problems

//Where we can use it:-
//if [0,n] ,[1,n] sorting is given or 1 to n kuchh kam karna hai


//worst no.of swaps =n-1
#include<iostream>
using namespace std;

int main(){
  int arr[]={4,1,6,2,5,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  
  cout<<endl;
  //Cyclic sorting
  int i=0;
  while(i<n){
    int correctIdx=arr[i]-1;
    if(i==correctIdx) i++;
    else swap(arr[i],arr[correctIdx]);
  }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}