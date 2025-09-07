#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix){

int r=matrix.size();
int c=matrix[0].size();
int mnr=0;
int mxr=r-1;
int mnc=0;
int mxc=c-1;
int totalele=r*c;
int count =0;
vector<int> ans;
while(count<totalele){
//we can use:- for(...;....&&count<totalele;...) in each loop instead of if condition after loop
for(int i =mnc;i<=mxc;i++){
    ans.push_back(matrix[mnr][i]);
    count++;
    }
    mnr++;
if(count>=totalele) break;
for(int j=mnr;j<=mxr;j++){
    ans.push_back(matrix[j][mxc]);
    count++;
    }
    mxc--;
if(count>=totalele) break;    
for(int p=mxc;p>=mnc;p--){
    ans.push_back(matrix[mxr][p]);
    count++;
    }
    mxr--;
if(count>=totalele) break;
for(int q=mxr;q>=mnr;q--){
    ans.push_back(matrix[q][mnc]);
    count++;
    }
    mnc++;
if(count>=totalele) break;    
}
return ans;
}

int main (){
vector<vector<int>> matrix ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<int> result =spiralOrder(matrix);
for (int i = 0; i < result.size(); i++)
{
    cout<<result[i]<<" ";
}

return 0;
}