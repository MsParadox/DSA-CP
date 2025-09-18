#include<iostream>
using namespace std;

void f(int *arr,int n){
int res =0;
for(int i=0;i<n;i++) res =res^arr[i];
int temp =res;

int k=0;
while(true){
    if((temp&1)==1) break;
    temp=temp>>1;
    k++;
}

int retval=0;
for (int i = 0; i < n; i++)
{if(((arr[i]>>k)&1)==1) retval^=arr[i];
}

cout<<retval<<" ";
res =retval^ res;
cout<<res;
}
int main(){
    int arr[]={4,4,1,3,2,5,1,2};
    int n=8;
    f(arr,n);
    return 0;
}