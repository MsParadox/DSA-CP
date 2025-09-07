#include<iostream>
#include<vector>
using namespace std;
int happiness(vector<int> &v,int x){
 int n = v.size();
 int left =x;
 int k=0;
 for (int i = 1; i <n; i++)
 {
    if(left>=v[i]){
        k++;
        left+=x-v[i];
    }
    else left+=x;
 }
 return k;
}
int main(){
    int p;
    cin>>p;
    while(p--)
    {    int m,x;
         cin>>m>>x;
         
         vector<int> v(m);
         for (int j = 0; j < m; j++)
         {
            cin>>v[j];
         }
         
        cout<<happiness(v ,x)<<endl;  
    }
    
   
    
    return 0;
}