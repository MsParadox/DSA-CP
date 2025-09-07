#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &num1,int m ,vector<int> &num2 ,int n){
vector<int> sort1(m+n);
for (int i = 0; i < m; i++)
{
    sort1[i]=num1[i];
}
for (int i = 0; i < n; i++)
{
    sort1[m+i]=(num2[i]);
}
sort(sort1.begin(),sort1.end());

num1=sort1;
return num1;

}
int main(){
    vector<int> num1 ={1};
    int m = 1;
    vector<int> num2 ={};
    int n = 0;
    vector<int> result = merge(num1,m,num2,n);
    for (int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}