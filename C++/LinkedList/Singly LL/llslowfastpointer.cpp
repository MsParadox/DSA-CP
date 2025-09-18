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
  Node* mid( Node* &head){
    Node* ptr1 = head;
     Node* ptr2 = head;
     while(ptr2 && ptr2 ->next){
      ptr1= ptr1 -> next;
      ptr2 = ptr2 ->next->next;
    
     } 
     return ptr1;
  }

  
 
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5);
      ll.display();
      Node* ans = mid (ll.head);
      cout<<ans->val;
    return 0;
}