#include<stdio.h>
int main(){

int arrsq[4][4] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

//transpose
for(int i =0; i<4; i++){
    for(int j=i;j<4;j++){
        int temp =arrsq[j][i];
        arrsq[j][i] = arrsq[i][j];
        arrsq[i][j]=temp;
    }
}
//rotate
for(int i = 0; i < 4; i++)
{ int j=0;
  int k=4-1;
  while(j<k){
        int temp = arrsq[i][j];
        arrsq[i][j]=arrsq[i][k];
        arrsq[i][k]=temp;
        j++;
        k--;

    }

}
//o/p
for(int i =0;i<4;i++){
    for(int j=0;j<4;j++){
        printf("%d ",arrsq[i][j]);
    }
    printf("\n");

}
return 0;
}