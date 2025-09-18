#include<iostream>
#include<stack>
using namespace std;
#define ll long long int
class MinStack{
public:
stack<ll>st;
ll min;
MinStack(){
    this->min = INT16_MAX;
}
void push( int val){
    if(this->st.empty()){
        this->min = val;
        this->st.push(val);}
else{
     this->st.push(val -this->min);
    if( this->min>val)
    {  this-> min = val; }
  }
 }
 void pop(){
    if( not this->st.empty()){
        if ( this-> st.top()>=0)
        {
         this->st.pop();            
        }
        else {
            this->min = this->min- this->st.top();
            this->st.pop();
        }
    }
 }
 int top(){
  if( this->st.size()==1){
    return this->st.top();
  }else if(this->st.top()<0){
    return this->min;
  }else{
    return this-> min +this-> st.top();
  }
 }
 int getMin(){
    return this-> min;
 }
};

int main (){

MinStack MS;
MS.push(-2);
MS.push(0);
MS.push(-3);
cout<<MS.getMin()<<endl;
MS.pop();
cout<<MS.top()<<endl;
cout<<MS.getMin()<<endl;



    return 0;
}