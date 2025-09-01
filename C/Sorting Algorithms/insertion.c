//swaping from end till the ele finds its position

#include<stdio.h>
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
   
   //Insertion Sort
   for (int i = 1; i <= n-1; i++)
   {
     //n-1 passes
     int j=i;
     while(j>=1 && arr[j]<arr[j-1])
    {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
      }
    }
    
   printf("\n");
   for (int  i = 0; i < n; i++)
   {
    printf("%d ",arr[i]);
   }
   
    
    return 0;

}