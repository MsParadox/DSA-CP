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
  void insertAtStart ( int value){
    Node* new_node = new Node( value);
    if(head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head ->prev= new_node;
    head = new_node;
    
  return ;}
  Node* deleteAtStart ( Node* &head){

    Node* temp = head;
    head = head ->next;
    head ->prev= NULL;
    free(temp);
    
  return head;} 
  void deleteatstart ( ){
    if(head == NULL){
      return;
    }
    Node* temp = head;
    head = head ->next;
    if( head == NULL){
      tail = NULL;
    }
    else {
      head -> prev = NULL;
    }
    free(temp);
    return;
  }
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
      
      dll.insertAtStart(1);
      dll.insertAtStart(2);   
      dll.insertAtStart(3); 
      dll.insertAtStart(4); 
      dll.insertAtStart(5);
      dll.insertAtStart(6);
      dll.display();
      dll.deleteAtStart(dll.head);
      dll.display();
      dll.deleteatstart();
      dll.display();
    return 0;
}