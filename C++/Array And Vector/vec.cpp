#include<iostream>
using namespace std;
int main(){
    int m,n ;
    cin>>m>>n;
    
int mohit[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>mohit[i][j];
    }
    
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<mohit[i][j]<<" ";
    }
   cout<<endl;
   }
    return 0;
}