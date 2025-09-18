//push efficient O(1), pop O(bad)
//pop efficient O(1), push O(bad)
#include<iostream>
#include<stack>
using namespace std;
//push efficint :-
class Queue1 {
stack<int> st;
public:
Queue1 (){}
void push (int x){
    this->st.push(x);
}
void pop(){
    if(this->st.empty()) return;
    stack<int> temp;
    while(this ->st.size()>1){
        temp.push(st.top());
        st.pop();
    }
    this->st.pop();
    while(!temp.empty()){
   st.push(temp.top());
    temp.pop();}
}
bool empty(){
   return this-> st.empty();
}
int front(){
    if(this->st.empty()) return -1; 
    stack<int> temp;
    while(this->st.size()>1){
        temp.push(st.top());
        st.pop();
    }
    int result = this->st.top();
    while(!temp.empty()){
   st.push(temp.top());
    temp.pop();}
    return result;
}
};
//pop efficient:-
class Queue2 {
stack<int> st;
public:
Queue2 (){}
void pop(){
    if(this->st.empty()) return;
    this->st.pop();
}
void push(int x){
    stack<int> temp;
    while(! this->st.empty()){
        temp.push(st.top());
       this->st.pop();
    }
    this->st.push(x);
    while(!temp.empty()){
   st.push(temp.top());
    temp.pop();}
}
bool empty(){
   return this-> st.empty();
}
int front(){
    if(this->st.empty()) return INT16_MIN; 
    return this ->st.top();
}
};

int main(){
    Queue2 qu;
    qu.push(10);
    qu.push(2);
    qu.push(60);
   // qu.pop();
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}