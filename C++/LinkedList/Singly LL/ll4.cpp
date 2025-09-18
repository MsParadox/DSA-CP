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
 bool pelindrome(Node* head){
  Node* s = head;
  Node* f = head; 
  while ( f && f->next)
 {
  s = s->next;
  f = f->next->next;
 }
 Node* curr = s ->next;
  s->next = NULL;
 while(curr)
 { Node* nex = curr->next;
  curr->next = s;
  s = curr;
  curr = nex;
}
  Node* head1 = head;
  Node* head2 = s;
  while( head2){
    if(head1->val!=head2->val)
    {
       return false;
       }
      head1 = head1->next;
      head2 = head2 ->next;
     } 
     
     return true;
  }
  
   
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(3);
      ll.insertAtTail(4); 
      ll.insertAtTail(1);
      ll.display();
     cout<< pelindrome(ll.head)<<endl;

    return 0;
}