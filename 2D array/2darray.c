//it is mendatory to mention 2nd coloumn
//int a[2][3];     ,   int a[][4];  correct
//int a[2][];      ,   int a[][];   incorrct

#include<stdio.h>
int main (){
int r,c;
printf("Enter r:");
scanf("%d",&r);
printf("Enter c:");
scanf("%d",&c);

int arr[2][3] = {{10,9,8},{7,6,5}};  
for(int i =0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int inputarr[r][c];
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&inputarr[i][j]);
    }
}
for(int i =0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",inputarr[i][j]);
    }
    printf("\n");
}
return 0;
}