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
  void insertAtStart (int value){
    Node* new_node = new Node( value);
    if(head == NULL){
        head = new_node;
        new_node->next=head;
        return;

    }
    Node* temp = head;
    while ( temp->next!=head){
      temp =temp ->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head = new_node;

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
      cll.insertAtStart(1);
      cll.insertAtStart(2);   
      cll.insertAtStart(3); 
      cll.insertAtStart(4); 
      cll.insertAtStart(5);
      cll.display();
      cll.printCircular();
    cll.display();
    return  0;
}