#include<stdio.h>
#include<math.h>
int main (){

int arr[3][4] = {1,0,0,1,0,1,1,1,1,0,0,1};
int mxcount =0; 
int mxidx =-1; 
for(int i =0;i<3;i++){
    int count =0;
    for(int j=0;j<4;j++){
    if(arr[i][j]==1){
     count++;
    }}
    if(mxcount<count){
         mxcount =count;
         mxidx=i;
    }
}
printf("%d %d",mxcount ,mxidx);
return 0;
}
