#include<iostream>
#include<vector>
using namespace std;
void makeZeroes(vector<vector<int>>& matrix){
int n =matrix.size();
for (int i = 0; i < n; i++)
{for (int j = 0; j < matrix[0].size(); j++)
{if(matrix[i][j]==0){
    for (int  k = 0; k < n; k++)
    {if(matrix[i][k]==0) continue;
    else matrix[i][k]=0;
        
    }
    for (int  k = 0; k < matrix[0].size(); k++)
    {if(matrix[k][i]==0) continue;
    else matrix[k][i]=0;
        
    }
}
}

}

return;


}
int main(){
vector<vector<int >> matrix ={{1,1,1},{1,0,1},{1,1,1,}};

makeZeroes(matrix);
for(int i =0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;

}


    return 0;

}