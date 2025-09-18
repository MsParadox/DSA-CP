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
    void display (){
      Node* temp = head;
      
      while ( temp!=NULL){
        cout<<temp->val <<" <-> ";
        temp=temp->next;
      } cout<<endl;
    }

  };
  bool ispelindrom( Node* head ,Node* tail){
    while( head!=tail && tail!= head->prev){
      if(head ->val!= tail ->val){
        return false;
      } 
      head = head ->next;
      tail = tail ->prev;
    } return true;
  }
 
     int main (){
      
    
      DoublyLinkedlist dll;
      
      dll.insertAtStart(1);
      dll.insertAtStart(2);   
      dll.insertAtStart(3); 
      dll.insertAtStart(2); 
      dll.insertAtStart(1);
      dll.display();
      cout<<ispelindrom(dll.head, dll.tail);
    return 0;
}