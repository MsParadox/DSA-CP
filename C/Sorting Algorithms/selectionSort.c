#include<stdio.h>
#include<limits.h>
//          time  and space 
//worst     O(n^2)    O(1)
//avg       O(n^2)    O(1)
//best      O(n^2)    O(1)  

//No. of operations = ((n+1)*n /2 ) - 1 
//No. of swaps = O(n)
//Unstable (same element relative order does not matter)

int main (){
    int arr[] ={ 5, 4, 3, 2, 1};
    int n=5;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
   
   //Selection Sort
   for (int i = 0; i < n-1; i++)
   {//n-1 passes
     int min =INT_MAX;
     int minidx = -1;
    for (int  j = i; j<=n-1; j++)
    {
      if(min >arr[j]){
        min = arr[j];
        minidx = j;
        
      }
    }
    //swap the min and first ele of unsorted part
    //swap minidx and i
    int temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
   }

   printf("\n");
   for (int  i = 0; i < n; i++)
   {
    printf("%d ",arr[i]);
   }
   
    
    return 0;

}