#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter number of integers you want : ");
    scanf("%d",&n);
    
//by normal array
    int arr[n];    
    for (int  i = 0; i <n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
//by DMA
int* ptr = (int*) malloc(n*sizeof(int));
int* p =ptr;
for (int  i = 1; i <=n ; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
ptr =p;
for (int  i = 1; i <=n ; i++)
    {
        printf("%d\n",(*ptr));
        ptr++;
    }
ptr =p;

//memory deallocation
free(ptr);//dangling pointer
free(p);
//for ptr++ :-  ERROR
ptr=NULL;
p=NULL;
//note that same address  which is returned by mellac() or callac() should be used to free up
// the allocated memory  apace in one go 
    
    
    return 0;

}