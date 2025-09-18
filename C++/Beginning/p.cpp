#include<iostream>
using namespace std;
int sum( int x , int y){
    int value =0;

    for(int i =x ; i <=y ; i++){
     value+= i;
    }
    return value;
    cout<<value;
}

int main (){

int x , y;

cout<<"Enter x:";
cin>>x;
cout<<"Enter y:";
cin>>y;
cout<< sum(x,y);


    return 0;
}