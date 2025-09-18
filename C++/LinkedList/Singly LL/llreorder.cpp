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
  Node* reorder( Node* &head){
    Node* s = head;
    Node* f = head;
    while ( f &&f->next){
      s = s->next;
      f = f->next->next;
    }
    Node* curr = s->next;
    s ->next = NULL;
    Node* p = s;
    while ( curr){
      Node* nex =curr->next;
      curr->next = p;
      p= curr;
      curr =nex;

    }
  Node* ptr1 = head;
  Node* ptr2 = p;
  while ( ptr1!= ptr2){
    Node* t = ptr1->next;
    ptr1->next = ptr2;
    ptr1= ptr2;
    ptr2 = t;

  }

    
    return head;  }
 
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5); 
      ll.insertAtTail(6);
      ll.display();
      ll.head = reorder(ll.head);
      ll.display();
    return 0;
}