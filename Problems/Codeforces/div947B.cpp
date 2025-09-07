#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> a ={1,4,4,2};
    int beautiful =0;
   int q=0;
    for (int i = 0; i <a.size(); i++)
    {int p =0;
    

        for (int j = 0; j <a.size(); j++)
    {
        if(a[j]%a[i]==0) p++;
    }
    q+=p;
    if(q>=a.size()) {
        beautiful=1;
        break;
    }
    
    if(i>=1) q-=p;}
    if (beautiful)  cout<<"Yes";
    else cout<<"No";
    
     return 0;}