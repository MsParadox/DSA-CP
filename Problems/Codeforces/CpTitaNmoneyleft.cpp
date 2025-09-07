#include<iostream>
using namespace std;


int main (){
long long m;
cin>>m;
for( int j =0;j<m;j++){
int n ,x;
cin>>n>>x;
if(n>=1 && n<=25){
long long money =0 ;
for(int i =0; i<n ;i++){

   money = 3*x +3;
   x = money;
}    
cout<<money<<endl;}
   }   return 0;
}