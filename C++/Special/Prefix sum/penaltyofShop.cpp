#include<iostream>
using namespace std;
int penality(string customers){
int n =customers.length();

int a[n+1];
int b[n+1];
a[0]=0;
//prifix sum
for(int i=0;i<n;i++){
    int pen =0;
    if(customers[i]=='N') pen++;
    a[i+1]=a[i]+pen;
    
   
}
//suffix sum
b[n]=0;
for (int i = n-1; i>=0; i--)
{  int pen=0;
 if(customers[i]=='Y') pen++;
  b[i]=b[i+1]+pen;
  
}


int mn=n;
for(int i=0;i<=n;i++){
    a[i]+=b[i];
    mn=min(mn,a[i]); 
}

for(int i=0;i<n+1;i++){
    if(a[i]==mn) return i; 
}
return n;
}
int main(){
    string customers ="NYNNNYYN";
    //3 4 3 4 5 6 5 4 5
    cout<<penality(customers);
return 0;
}
