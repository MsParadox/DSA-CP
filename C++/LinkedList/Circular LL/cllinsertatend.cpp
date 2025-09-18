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
 class CircularLinkedlist{

public:
  Node* head ;
  CircularLinkedlist(){
    head = NULL;


  }
  void insertAtEnd (int value){
    Node* new_node = new Node( value);
    if(head == NULL){
        head = new_node;
        new_node->next=head;
        return;

    }
    Node* tail = head;
    while ( tail->next!=head){
      tail =tail ->next;
    }
    tail->next = new_node;
    new_node->next = head;
    

    }
    void display (){
      Node* temp = head;
      do{
        cout<<temp->val <<"->";
        temp=temp->next;
      } while (temp!= head);
       cout<<endl;
    }
 void printCircular (){
  Node* temp = head;
  for ( int i= 0 ; i < 15 ;i++){
    cout<<temp ->val<<"->";
    temp = temp->next;
  } cout <<endl;
 }
  };
 
     int main (){
     CircularLinkedlist cll;
      cll.insertAtEnd(7);
      cll.insertAtEnd(1);
      cll.insertAtEnd(2);   
      cll.insertAtEnd(3); 
      cll.insertAtEnd(4); 
      cll.insertAtEnd(5);
      cll.display();
      cll.insertAtEnd(6);
    cll.display();
    return  0;
}