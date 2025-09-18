#include<iostream>
using namespace std;


class Node {
  public:
    int val;
    Node* next ;
         Node (int data){
        val = data;
            next = NULL;

    }
};
 class Linkedlist{

public:
  Node* head ;
  Linkedlist(){
    head = NULL;


  }
  void insertAtTail ( int value){
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
    }

  };
 Node* oddeven(Node* &head ){
  Node* evenhead = head->next;
  Node* oddptr = head;
  Node* evenptr = evenhead;
  while(evenptr && evenptr->next){
    oddptr->next = oddptr->next->next;
    evenptr->next  =evenptr->next->next;
      oddptr=oddptr->next;
    evenptr= evenptr->next;
    
    }oddptr->next = evenhead;
   return head;
 }
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5);
   ll.display();
   ll.head =oddeven(ll.head);
   ll.display();
    return 0;
}