#include<iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node (int value){
    this-> data = value;
    this->next = NULL;
}
};
class Stack{
Node* head;
int capacity;
int currSize;
public:
Stack (int c){
    this-> capacity = c;
    this->currSize = 0;
    head = NULL;
}
bool isEmpty(){

    return this -> head== NULL;}
bool isFull (){
    return this->currSize== this->capacity;
}
void push(int data){
    if(this ->currSize==this->capacity){
        cout<<"overflow\n";
        return;
    }
Node* new_node = new Node (data);
new_node -> next= this->head;
this->head = new_node;
this->currSize++;
}
int pop(){
    if(this->head = NULL){
        cout <<"underflow\n";
        return INT16_MIN;
    }
    Node* new_head = this ->head->next;
   this-> head->next = NULL;
   Node* toberemoved = this->head;
   int result = toberemoved->data;
   delete toberemoved;
   this->head = new_head;
   return result;
   }
   int getTop(){
     if(this->head == NULL){
        cout <<"underflow\n";
        return INT16_MIN;
    }return this->head->data;
   }
   int size(){
    return this->currSize;
   }
};
int main(){
     Stack st(5); 
 st.push(1);
 st.push(2);
 cout<<st.isEmpty()<<endl;
 st.push(3);
 cout<<st.getTop()<<"\n";
 st.push(4);
 st.push(5);
 cout<<st.getTop()<<"\n";
 st.push(6);
    return 0;
}