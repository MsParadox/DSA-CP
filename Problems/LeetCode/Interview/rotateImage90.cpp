#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
    int n=matrix.size();

    for(int i =0; i<n; i++){
    for(int j=i;j<n;j++){
        int temp =matrix[j][i];
    matrix[j][i] =matrix[i][j];
    matrix[i][j]=temp;
    }
}
for(int i = 0; i < n; i++)
{ int j=0;
  int k=n-1;
  while(j<k){
    int temp =matrix[i][j];
    matrix[i][j]=matrix[i][k];
    matrix[i][k]=temp;
        j++;
        k--;

    }

}
  return;  }
int main(){

vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
rotate(matrix);
for(int i =0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;

}
return 0;
}