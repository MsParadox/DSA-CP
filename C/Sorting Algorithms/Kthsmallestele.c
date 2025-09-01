#include<stdio.h>
#include<limits.h>

int main (){
    int arr[] ={ 1, 26, 90, 8, 15};
    int n=5;
    int k =3;
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
   
   //Selection Sort
   for (int i = 0; i < k; i++)
   {//k-1 passes
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
   printf("\n");
   printf("%d th smallest element is : %d", k,arr[k-1]);
    
    return 0;

}