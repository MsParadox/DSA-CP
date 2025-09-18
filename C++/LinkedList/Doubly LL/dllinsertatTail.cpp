#include<iostream>
using namespace std;


class Node {
  public:
    int val;
    Node* prev;
    Node* next ;

         Node (int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};
 class DoublyLinkedlist{

public:
  Node* head ;
  Node* tail;
  DoublyLinkedlist(){
    head = NULL;
    tail = NULL;


  }
  void insertAtTail ( int value){
    Node* new_node = new Node( value);
    if(tail == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->prev = tail;
    tail ->next= new_node;
    tail = new_node;
    
  return ;}
    void display (){
      Node* temp = head;
      
      while ( temp!=NULL){
        cout<<temp->val <<" <-> ";
        temp=temp->next;
      } cout<<endl;
    }

  };
 
     int main (){
      
    
      DoublyLinkedlist dll;
      
      dll.insertAtTail(1);
      dll.display();
      dll.insertAtTail(2);   
      dll.insertAtTail(3);
      dll.display(); 
      dll.insertAtTail(4); 
      dll.insertAtTail(5);
      dll.display();

    return 0;
}