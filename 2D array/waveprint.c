
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
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
       if(i%2==0){
        printf("%d ",inputarr[i][j]);
        }
        else{
            printf("%d ",inputarr[i][c-j-1]);
        }
    }
 printf("\n");   
}

return 0;
}