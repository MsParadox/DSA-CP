#include<stdio.h>

int main (){
int r,c;
printf("Enter r:");
scanf("%d",&r);
printf("Enter c:");
scanf("%d",&c);
int inputarr[r][c];
int mnr=0;
int mxr=r-1;
int mnc=0;
int mxc=c-1;
int totalele=r*c;
int count =0;

while(count<totalele){
    //we can use:- for(...;....&&count<totalele;...) in each loop instead of if condition after loop
for(int i =mnc;i<=mxc;i++){
    inputarr[mnr][i]=count+1;
    count++;
    }
    mnr++;
if(count>=totalele) break;
for(int j=mnr;j<=mxr;j++){
    inputarr[j][mxc] =count+1;
    count++;
    }
    mxc--;
if(count>=totalele) break;    
for(int p=mxc;p>=mnc;p--){
    inputarr[mxr][p]=count+1;
    count++;
    }
    mxr--;
if(count>=totalele) break;
for(int q=mxr;q>=mnr;q--){
    inputarr[q][mnc]=count+1;
    count++;
    }
    mnc++;
if(count>=totalele) break;    
}

for(int i =0;i<r;i++){
    for(int j =0; j<c;j++){
        printf("%d ",inputarr[i][j]);
    }
    printf("\n");
}
return 0;
}