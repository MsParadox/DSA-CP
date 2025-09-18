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
  bool detectcycle( Node* head){
    Node* p1 = head;
    Node* p2 = head;
    while(p2 &&p2->next){
      p1 = p1 ->next;
      p2 = p2 ->next->next;
      if ( p1== p2){ 
        cout<<p1->val<<endl;
        return true;
        
      }
    
  } return false;
  }
void removecycle( Node* &head){
    Node* p1 = head;
    Node* p2 = head;
    do {
      p1 = p1 ->next;
      p2 = p2 ->next->next;}
      while( p1!= p2);
      
        p2 =head;
        while(p2->next != p1->next){
        p2 = p2->next;
        p1 = p1->next;}

        p1->next = NULL; 
}
  
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5);
      ll.insertAtTail(6);
     // ll.display();
     ll.head->next->next->next->next->next->next= ll.head->next->next;
    // cout<< detectcycle(ll.head);
      removecycle(ll.head);
      ll.display();
    return 0;
}