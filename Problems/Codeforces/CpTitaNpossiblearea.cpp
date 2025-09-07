#include<iostream>
#include<cmath>
using namespace std;
void intersectortouch(int x1,int y1 ,int r1,int x2 ,int y2, int r2){
     float c1c2 =(pow((x1-x2),2)+pow((y1-y2),2));
     if(c1c2<=pow((r1+r2),2))
     { cout<<"YES" <<endl;}
     else{
        cout<<"NO"<<endl;
     }
}
int main (){
int n;
cin>>n;
int x1 ,y1, r1 , x2 ,y2 ,r2;
for(int i =0; i<n ;i++){
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    intersectortouch(x1,y1,r1,x2,y2,r2);

}    
    return 0;
}