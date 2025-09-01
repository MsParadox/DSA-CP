#include<stdio.h>
int main (){

//method1
    int arr[2][3] = {{10,9,8},{7,6,5}};  
for(int i =0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");

}

//method2
int brr[3][2];
 for(int i =0;i<3;i++){
    for(int j=0;j<2;j++){
        brr[i][j]=arr[j][i];
    }
}
printf("\n");
for(int i =0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}

//method3 for square matrix
int arrsq[4][4] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
for(int i =0; i<4; i++){
    for(int j=i;j<4;j++){
        int temp =arrsq[j][i];
        arrsq[j][i] = arrsq[i][j];
        arrsq[i][j]=temp;
    }
}
    printf("\n");

for(int i =0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d ",arrsq[i][j]);
    }
    printf("\n");

}

   return 0;
}