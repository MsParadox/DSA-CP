#include<stdio.h>
#include<stdbool.h>
//          time  and space 
//worst     O(n^2)    O(1)
//avg       O(n^2)    O(1)
//best      O(n)      O(1)  

//No. of operations = (n-1)*n /2 = max no of swaps in wrost case
//Stable (same element relative order matters)

int main (){
    int arr[] ={ 5, 4, 3, 2, 1};
    int n=5;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
   
   //Bubble Sort
   for (int i = 0; i < n-1; i++)
   {
     bool flag = true; //array is not sorted yet
    for (int  j = 0; j< n-1-i; j++)
    {
      if(arr[j] >arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = false;
      }
    }
    if(flag == true) break;
   }


   printf("\n");
   for (int  i = 0; i < n; i++)
   {
    printf("%d ",arr[i]);
   }
   
    
    return 0;

}