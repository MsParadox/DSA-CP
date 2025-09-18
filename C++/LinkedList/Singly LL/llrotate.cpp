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
  Node* rotate( Node* &head,int k){
    int num = 0;
   Node* p = head; 
    while( p->next){
      num++;
      p = p->next;
      
    }
    num++;
    k = k%num;
    if(k==0){
      return head;
    }
    p->next=head;
    Node* t = head;
    for ( int i =1 ;i< num-k;i++){
      t = t->next;
    }
  
     
    
    Node* newhead = t->next;
    t->next=NULL;
    return newhead;
  }
 
     int main (){
      Linkedlist ll;
      ll.insertAtTail(1);
      ll.insertAtTail(2);   
      ll.insertAtTail(3); 
      ll.insertAtTail(4); 
      ll.insertAtTail(5);
      ll.insertAtTail(6);
      ll.display();
     ll.head= rotate(ll.head,2);
      ll.display();

    return 0;
}