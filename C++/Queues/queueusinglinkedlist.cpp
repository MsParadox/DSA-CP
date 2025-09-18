#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        this->data = val;
        this->next = NULL;
        
    }
};
class Queue {
    Node * head;
    Node * tail;
    int size;
    public:
    Queue(){
    
    this-> head = NULL;
    this->tail = NULL;
    this-> size =0;
     }
void enqueue (int data){
    Node * new_node = new Node (data);
    if(this-> head==NULL){
        this->head = this->tail = new_node;
    }
    else {
        this->tail->next = new_node;
        this->tail = new_node;
    } this->size++;
}
void dequeue(){
    if(this->head ==NULL){
        return;
    } else{
        Node* oldhead = this->head;
        Node* newhead = this->head->next;
        this->head = newhead;
        if(this->head == NULL) this->tail = NULL;
        oldhead->next =NULL;
        delete oldhead;
        this->size--;
    }
}
int getFront(){
    if(this->head== NULL)  return -1;
    
    return this-> head->data;
}
int getSize (){
    return this->size;
}
bool isEmpty (){
   return this->head ==NULL;
}
};
int main (){
  Queue qu;
  qu.enqueue(10);
  qu.enqueue(20);
  qu.enqueue(30);
  qu.dequeue();
  qu.enqueue(40);
 while(!qu.isEmpty()){
    cout<<qu.getFront()<<" ";
  qu.dequeue(); }
    return 0;
}
