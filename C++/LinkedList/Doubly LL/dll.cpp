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
  /*void insertAtTail ( int value){
    Node* new_node = new Node( value);
    if(head == NULL){
        head = new_node;
        return;

    }
    Node* temp = head;
    while ( temp->next!=NULL){
      temp =temp ->next;
    }
    temp->next = new_node;
    }
    void display (){
      Node* temp = head;
      while ( temp!=NULL){
        cout<<temp->val <<"->";
        temp=temp->next;
      } cout<<"NULL"<<endl;
    }*/

  };
 
     int main (){
      Node* new_node = new Node(3);
    
      DoublyLinkedlist dll;
      dll.head = new_node;
      dll.tail = new_node;
      cout<<dll.head->val<<endl;
      /*ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5);
      ll.display();*/

    return 0;
}