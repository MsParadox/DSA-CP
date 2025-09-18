#include<iostream>
using namespace std;
float SqrtReciprocal(float x){
   return 1+(0.5*(x-1) )-(0.125*(x-1)*(x-1)) +(0.0625*(x-1)*(x-1)*(x-1) )-(0.039062*(x-1)*(x-1)*(x-1)*(x-1))+(0.0273434375*(x-1)*(x-1)*(x-1)*(x-1)*(x-1) ) ;
}

int main (){
    float x;
    cout<<"Enter x :";
    cin>>x;
    x= 1/x;
    cout<<x<<endl;
    cout<<SqrtReciprocal(x);
        return 0;

}