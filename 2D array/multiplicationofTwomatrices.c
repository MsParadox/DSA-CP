#include<stdio.h>
int main(){
int m1[2][2]={{1,0},{0,1}};
int m2[2][2]={{1,0},{0,1}};
int m1Multiplym2[2][2];
for(int i =0;i<2;i++){
    for(int j=0;j<2;j++){
        m1Multiplym2[i][j]=0;
        for(int k=0;k<2;k++){
        m1Multiplym2[i][j]+=m1[i][k]*m2[k][j];
        }
 }
}

for(int i =0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",m1Multiplym2[i][j]);
    }
    printf("\n");
}
return 0;
}