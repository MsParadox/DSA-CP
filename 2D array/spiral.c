#include<stdio.h>

int main (){
int r,c;
printf("Enter r:");
scanf("%d",&r);
printf("Enter c:");
scanf("%d",&c);
int inputarr[r][c];
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&inputarr[i][j]);
    }
}
int mnr=0;
int mxr=r-1;
int mnc=0;
int mxc=c-1;
int totalele=r*c;
int count =0;
while(count<totalele){
    //we can use:- for(...;....&&count<totalele;...) in each loop instead of if condition after loop
for(int i =mnc;i<=mxc;i++){
    printf("%d ",inputarr[mnr][i]);
    count++;
    }
    mnr++;
if(count>=totalele) break;
for(int j=mnr;j<=mxr;j++){
    printf("%d ",inputarr[j][mxc]);
    count++;
    }
    mxc--;
if(count>=totalele) break;    
for(int p=mxc;p>=mnc;p--){
    printf("%d ",inputarr[mxr][p]);
    count++;
    }
    mxr--;
if(count>=totalele) break;
for(int q=mxr;q>=mnr;q--){
    printf("%d ",inputarr[q][mnc]);
    count++;
    }
    mnc++;
if(count>=totalele) break;    
}
return 0;
}