
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
int r1,l1,r2,l2;
printf("Enter r1 & l1:");
scanf("%d %d",&r1,&l1);
printf("Enter r2 & l2:");
scanf("%d %d",&r2,&l2);

int sum =0; 
for(int i =r1;i<r2+1;i++){
    for(int j=l1;j<l2+1;j++){
        sum +=inputarr[i][j];
    }
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
       printf("%d ",inputarr[i][j]);
    }
    printf("\n");

}
printf("The sum is :%d",sum);
return 0;
}