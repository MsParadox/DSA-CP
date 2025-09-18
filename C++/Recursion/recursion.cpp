#include<iostream>
using namespace std;
        
        
     
     
 
int main () {
    int n;
     cin>>n;
    int a= 1;
    int b =1;
    int c=0;


   for( int i = 1;i<= n-2; i++){
    c = a+ b;
     a = b;
     
     b = c;
}

cout<<c;
 //0 1 1 2 3 5 8 13     

 return 0;
}